#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 10
#define MAX_CART 20

// Product structure
typedef struct {
    int id;
    char name[30];
    char size[10];
    float price;
    int qty;
} Product;

// Cart item structure
typedef struct {
    Product product;
    int qtyBought;
} CartItem;

// Customer structure
typedef struct {
    char name[30];
    CartItem cart[MAX_CART];
    int cartCount;
} Customer;

// Function to display stock
void displayStock(Product stock[], int count) {
    printf("\n--- Supermarket Stock ---\n");
    for(int i=0; i<count; i++) {
        printf("%d - %s (%s) : ₦%.2f x %d\n", 
            stock[i].id, stock[i].name, stock[i].size, stock[i].price, stock[i].qty);
    }
}

// Function to add to cart
void addToCart(Customer *cust, Product stock[], int index, int qty) {
    if(stock[index].qty >= qty) {
        cust->cart[cust->cartCount].product = stock[index];
        cust->cart[cust->cartCount].qtyBought = qty;
        cust->cartCount++;
        stock[index].qty -= qty; // update stock
    } else {
        printf("Not enough stock for %s!\n", stock[index].name);
    }
}

// Function to generate receipt
float generateReceipt(Customer cust) {
    float total = 0;
    printf("\n--- Receipt for %s ---\n", cust.name);
    for(int i=0; i<cust.cartCount; i++) {
        float lineTotal = cust.cart[i].product.price * cust.cart[i].qtyBought;
        printf("%s x %d = ₦%.2f\n", cust.cart[i].product.name, cust.cart[i].qtyBought, lineTotal);
        total += lineTotal;
    }
    printf("TOTAL: ₦%.2f\n", total);
    return total;
}

// Save stock to file
void saveStock(Product stock[], int count) {
    FILE *f = fopen("stock.txt", "w");
    for(int i=0; i<count; i++) {
        fprintf(f, "%d,%s,%s,%.2f,%d\n", 
            stock[i].id, stock[i].name, stock[i].size, stock[i].price, stock[i].qty);
    }
    fclose(f);
}

// Save receipt to file
void saveReceipt(Customer cust, float total) {
    FILE *f = fopen("orders.txt", "a");
    fprintf(f, "Receipt for %s\n", cust.name);
    for(int i=0; i<cust.cartCount; i++) {
        fprintf(f, "%s x %d = ₦%.2f\n", 
            cust.cart[i].product.name, cust.cart[i].qtyBought, 
            cust.cart[i].product.price * cust.cart[i].qtyBought);
    }
    fprintf(f, "TOTAL: ₦%.2f\n\n", total);
    fclose(f);
}

// Main simulation
int main() {
    Product stock[MAX_PRODUCTS] = {
        {1,"Rice","5kg",5000,10},
        {2,"Beans","2kg",3000,15},
        {3,"Milk","1L",1500,20},
        {4,"Sugar","1kg",1200,25},
        {5,"Salt","500g",500,30},
        {6,"Bread","1 loaf",800,20},
        {7,"Eggs","12pcs",2000,18},
        {8,"Oil","2L",3500,12},
        {9,"Butter","250g",1000,10},
        {10,"Tea","100g",700,15}
    };

    Customer cust = {"Adams", {}, 0};

    displayStock(stock, MAX_PRODUCTS);

    // Customer buys items
    addToCart(&cust, stock, 0, 2); // 2 bags of rice
    addToCart(&cust, stock, 2, 3); // 3 bottles of milk

    float total = generateReceipt(cust);

    saveStock(stock, MAX_PRODUCTS);
    saveReceipt(cust, total);

    printf("\nStock updated and receipt saved.\n");

    return 0;
}

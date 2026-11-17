#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    char size[10];
    float price;
    int qty;
} Product;

typedef struct {
    Product product;
    int qtyBought;
} CartItem;

typedef struct {
    char name[30];
    CartItem cart[20];
    int cartCount, product;
} Customer;

void displayStock(Product stock[], int count) {
    for(int i=0; i<count; i++) {
        printf("%d - %s (%s) : ₦%.2f x %d\n", 
            stock[i].id, stock[i].name, stock[i].size, stock[i].price, stock[i].qty);
    }
}

void addToCart(Customer *cust, Product stock[], int index, int qty) {
    if(stock[index].qty >= qty) {
        cust->cart[cust->cartCount].product = stock[index];
        cust->cart[cust->cartCount].qtyBought = qty;
        cust->cartCount++;
        stock[index].qty -= qty;
    } else {
        printf("Not enough stock!\n");
    }
}

void generateReceipt(Customer cust) {
    float total = 0;
    printf("\n--- Receipt for %s ---\n", cust.name);
    for(int i=0; i<cust.cartCount; i++) {
        float lineTotal = cust.cart[i].product.price * cust.cart[i].qtyBought;
        printf("%s x %d = ₦%.2f\n", cust.cart[i].product.name, cust.cart[i].qtyBought, lineTotal);
        total += lineTotal;
    }
    printf("TOTAL: ₦%.2f\n", total);
}

int main() {
    Product stock[3] = {
        {1,"Rice","5kg",5000,10},
        {2,"Beans","2kg",3000,15},
        {3,"Milk","1L",1500,20}
    };

    Customer cust = {"Adams", {}, 0};

    displayStock(stock, 3);

    addToCart(&cust, stock, 0, 2); // Rice
    addToCart(&cust, stock, 2, 3); // Milk

    generateReceipt(cust);

    return 0;
}

#include <stdio.h>

int main() {


    char choice;

    float loan = 5000;

    printf("1: Buy Data\n");
    printf("2:Buy Airtime\n");
    printf("3: Borrow Airtime\n");
    printf("*:Next\n\n");
    printf("Enter Option:");

    choice = getchar();

    switch (choice) {
    case '1':
   printf("you have selected to buy data");
   break;}
   
   printf("you have selected to buy airtime");
   

printf("you want to borrow airtime");

    

    
    float credit_bal;

    printf("you have selected to pay back loan..\n\n");
    scanf("%f", &credit_bal);
    

    if (credit_bal <=0) 
    printf("loan repayment cannot be zero or less");

    
else if (credit_bal >loan){
    credit_bal -= loan;
    loan =0;

    printf("you have paid successfully\n");
    printf("current balance is: %.f\n", credit_bal);
        printf("current loan balance is: %.f\n",loan);
}

        else if (credit_bal < loan){
        
        loan -= credit_bal;
        credit_bal = 0;
        
        
        printf("current balance is: %.f\n", credit_bal);
        printf("current loan balance is: %.f\n", loan);
        

         if (credit_bal=0);
        
    printf("loan fully paid.\n");
                 printf("current loan balance is:%.f\n");
               }  
        

        
        
        printf("go to next page");
        
        
    
    printf("invalid option");
    
    
  
    return 0;
    }
  

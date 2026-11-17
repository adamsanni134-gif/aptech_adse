#include <stdio.h>
int main(){
    char choice;
   int wrong=0;
    
    
float loan=5000;
while(wrong<3);{
    printf("1:buy data\n");
    printf("2:buy airtime\n");
    printf("3:borrow airtime\n");
    printf("*:next\n");
    printf("enter option:");

    choice = getchar();

    if (choice=='1')
    printf("you have selected to buy data...");

    else if(choice =='2')
    printf("you have selected to buy airtime");

    else if(choice=='3')
    printf("how much do you want to borrow");

    else if(choice=='*')
    printf("go to next page");

    else
    wrong++;
printf("invalid options\n");

if (wrong==3)
printf("program terminated.\n");
   switch (choice) 
    case '1':
   printf("you have selected to buy data");
   
   
   printf("you have selected to buy airtime");
   

printf("you want to borrow airtime");

    

    
    float credit_bal;

    printf("you have selected to pay back loan..\n\n");
    scanf("%f", &credit_bal);
    

    if (credit_bal <=0) 
    printf("loan repayment cannot be zero or less");

    
else if (credit_bal >loan)
    credit_bal -= loan;
    loan =0;

    printf("you have paid successfully\n");
    printf("current balance is: %.f\n", credit_bal);
        printf("current loan balance is: %.f\n",loan);


         if (credit_bal < loan)
        
        loan -= credit_bal;
        credit_bal = 0;
        
        
        printf("current balance is: %.f\n", credit_bal);
        printf("current loan balance is: %.f\n", loan);
        

         if (credit_bal=0);
        
    printf("loan fully paid.\n");
                 printf("current loan balance is:%.f\n");
}
               
        

        
        
        
        
        
    
    

    
  
    return 0;
    
  
 //break;
}
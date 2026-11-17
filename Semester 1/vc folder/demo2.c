#include <stdio.h>

int main(){
char choice
    printf("1:Buy data\n2: buy airtime\n3: borrow airtime\n4: pay back loan\n*: next\n\n");
    char value = getchar();
    putchar(value);
    scanf(" %c, &choice");

 int wrong=0;
    
    
float loan=5000;
while(wrong<3);
 //   printf("1:buy data\n");
  //  printf("2:buy airtime\n");
  //  printf("3:borrow airtime\n");
    //printf("*:next\n");
 //   printf("enter option:");

    //choice = getchar();

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

}
    

#include <stdio.h>
void square(int* x);

int main(){
    int i;
    i =5;
    square(&i);

    printf("value of i is %d\n", i);

    return 0;


}

void square(int* x){
    int j = ((*x) * (*x));
    printf("square of %d is: %d\n", *x, j);
    *x += 5;
}
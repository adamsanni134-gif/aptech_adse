#include <stdio.h>
int square(int x);

int main(){
    int i;

    for(i = 1; i <= 10; i++){
        int j;
        j = square(i);
       printf("square of %d is: %d\n", i, j); 

    }
    return 0;
}

int square(int x){

    return(x * x);
}
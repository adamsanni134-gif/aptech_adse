#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // points to arr[0]

    printf("%d\n", *p);    
    p++;                    
    printf("%d\n", *p);    
    p += 2;                 
    printf("%d\n", *p);    
    printf("Distance: %ld\n", (p - arr)); 
    return 0;
}

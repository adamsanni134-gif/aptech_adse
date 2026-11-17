#include <stdio.h>

int main(){
    #include <stdio.h>

int main() {
    double radius, area, perimeter;
    double *r_ptr = &radius;
    double *a_ptr = &area;
    double *p_ptr = &perimeter;

    printf("ENTER THE RADIUS: ");
    scanf("%lf", r_ptr);

    printf("RADIUS: %.2f\n", *r_ptr);

    *a_ptr = 3.142 * (*r_ptr) * (*r_ptr);   // area = πr²
    *p_ptr = 2 * 3.142 * (*r_ptr);          // perimeter = 2πr

    printf("AREA = %.2f\n", *a_ptr);
    printf("PERIMETER = %.2f\n", *p_ptr);

    return 0;
}

}



    
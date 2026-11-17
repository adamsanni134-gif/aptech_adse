#include <stdio.h>

int main(){
    int ary[3] [4];

    ary[0][0] = 1;
    ary[0][1] = 2;
    ary[0][2] = 3;
    ary[0][3] = 4;
    ary[1][0] = 5;
    ary[1][1] = 6;
    ary[1][2] = 7;
    ary[1][3] = 8;
    ary[2][0] = 9;
    ary[2][1] = 10;
    ary[2][2] = 11;
    ary[2][3] = 12;

    int i, j;

    for(i=0;i< 3; i++){
        for(j =0; j <4; j++){
            printf("%d",ary[i][j]);
        }
        printf("\n");
    }
}
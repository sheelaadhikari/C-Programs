//wap to print the array element in matrix form
#include<stdio.h>
void main(){
    int i, j, a[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("enter the value for[%d][%d]", i, j);
            scanf("%d", &a[i][j]);


        }
    }
    for(i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("%d\t", a[i][j]);

        }
        printf("\n");
    }

}
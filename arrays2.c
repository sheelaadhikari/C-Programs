//wap to store value in two dimentional array.
#include<stdio.h>
void main(){
    int i, j, arr[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("enter the value for[%d][%d]", i,j);
            scanf("%d", &arr[i][j]);

        }
    }
}
//wap to print the pattern 
#include<stdio.h>
void main(){
    int i, j,n;
    printf("enter the row: ");
    scanf("%d", &n);
    for(i= 1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");


    }

}
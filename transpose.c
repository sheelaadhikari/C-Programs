//wap to find the transpose of the given matrix using 2d array
#include<stdio.h>
void main(){
    int i , j, arr[2][2], num[2][2];
    for(i=0; i<2; i++){
        for(j=0;  j<2; j++){
            printf("enter any value : ");
            scanf("%d", &arr[i][j]);

        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            num[i][j]=arr[j][i];

        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t", num[i][j]);


        }
        printf("\n");
    }
}
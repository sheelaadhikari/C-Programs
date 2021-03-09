//wap to add the matrix form of array elements.
#include <stdio.h>
void main(){
    int i, j, num[2][2], arr[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("enter any value: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("enter any value: ");
            scanf("%d", &num[i][j]);


        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            num[i][j]=num[i][j]+arr[i][j];

        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }


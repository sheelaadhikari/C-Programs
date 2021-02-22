#include <stdio.h>
void main(){
    int i, j, n;
    printf("enter the number for row: ");
    scanf("%d", &n);
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("%d", j);

        }
        printf("\n");
        
    }
}
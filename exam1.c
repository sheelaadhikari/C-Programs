//wap to to accept n numbers and display the sum of highest and lowest numbers
#include <stdio.h>
void main(){
    int i, n, h=0, l=100, sum=0;
    
    for(i=0; i<=5; i++){
        printf("enter the number: ");
    scanf("%d", &n);
        if(n>0){
            h=h>n?h:n;
            l=l<n?l:n;
            sum=h+l;
        }
       
    }
     printf("%d is the sum of highest and lowest number", sum);
}



//wap to convert the given decimal number into binary number.
#include <stdio.h>
void main(){
    int i, num, rem[10];
    printf("enter the value: ");
    scanf("%d", &num);
    for(i=0; num>0; i++){
        rem[i]=num%2;
        num=num/2;

    }
    printf("binary number of given number is: ");
    for(i=i-1; i>=0; i--){
        printf("%d", rem[i]);
    }
}
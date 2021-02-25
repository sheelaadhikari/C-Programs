//wap to add the array elements
#include <stdio.h>
void main(){
    int i, arr[5], sum=0;
    for(i=0; i<5; i++){
        printf("enter the value for [%d]", i);
        scanf("%d", &arr[i]);
        sum=sum+arr[i];

printf("the sum is %d", sum);

    }


}

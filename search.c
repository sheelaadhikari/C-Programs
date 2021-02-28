//wap to search an item in given array.
#include <stdio.h>
void main(){
    int i, arr[5], num;
    for(i=0; i<5; i++){
        printf("enter the value for [%d]", i);
        scanf("%d",&arr[i]);

    }
    printf("enter the search value: ");
    scanf("%d", &num);
    for(i=0; i<5; i++){
        if(arr[i]==num){
            printf("%d is available at arr[%d]",num,i);


        }
    }
        if(arr[i]==5)
       
            printf("%d is not available");
        
    }

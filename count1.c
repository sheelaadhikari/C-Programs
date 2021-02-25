//wap to count the even and odd numbeer present in array elements
#include <stdio.h>
void main(){
    int i, odd=0, even=0, a[5];
    for(i=0; i<5; i++) {
        printf("enter the number");
    
        scanf("%d",& a[i]);
    }
    for(i=0; i<5; i++){
        if(a[i]%2==0)
        even++;
        else
        
            odd++;
        }
        
        printf("the number of even number is %d\n the number of odd number is %d", even, odd);
        }
        
    

//wap to print the array elements
#include <stdio.h>
void main()
{
    int i, arr[5];
    for (i = 0; i < 5; i++)
    {
        printf("enter the value for[%d]", i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++){
    printf("%d", arr[i]);
}
}
    
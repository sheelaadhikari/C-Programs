// wap to print the array elements in reverse order.
#include <stdio.h>
void main()
{
    int i, j, age[10], rem, temp;
    for (i = 0; i < 5; i++)
    {
        printf("enter the value for[%d]", i);
        scanf("%d", &age[i]);
    }
for (i = 0, j = 5; i < j; i++, j--){
        
    temp = age[i];
    age[i] = age[j];
    age[j] = temp;
}
    for(i = 0; i < 5; i++)
{
    printf("%d\n", age[i]);
}
}
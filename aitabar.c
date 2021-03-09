// wap  to find the greateat number among five.
#include <stdio.h>
void main()
{
    int i, a[5], max = 0;
    for (i = 0; i <= 5; i++)
    {
        printf("enter the number: ");
        scanf("%d", a[i]);

        if (a[i] > max)
            max = a[i];
    }
    printf("the maximum number is %d", a[i]);
   
}
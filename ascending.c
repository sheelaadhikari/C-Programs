// wap to print array elements in ascending order.
#include <stdio.h>
void main()
{
    int i, j, num[10], swap;
    for (i = 0; i < 5; i++)
    {
        printf("enter the value for [%d]", i);
        scanf("%d", num[i]);
    
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                swap = num[i];
                num[i] = num[j];
                num[j] = swap;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", num[i]);
    }
}
}

#include <stdio.h>
void main()
{
    int n, i, sum = 0, count = 0;
    for (i = 1; i <10; i++)
    { printf("enter the integers: ");
        scanf("%d", &n);

        if(n==i)
        {
            sum = sum + n;
        }
        else
        {
            count++;

        }
        
    }
    printf("the sum is %d", sum);
        printf("the number of invalid integers are %d", count);
}
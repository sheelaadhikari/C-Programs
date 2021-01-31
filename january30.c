// program to find the largest number among three given numbers.
#include <stdio.h>
void main()
{
    int a, b, c, large;
    printf("enter the number: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)

            large = a;
        else

            large = c;
    }
    else
    {
        if (b > c)
            large = b;
        else
        {
            large = c;
        }
        printf("largest number is %d\n", large);
    }
}

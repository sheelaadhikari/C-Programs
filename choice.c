
#include <stdio.h>
void main()
{
    int num = 12345, sum = 0, rem, i;

    for (i = 1; i <= 5; i++)
    {

        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    printf("sum of the digits= %d\n", sum);
}
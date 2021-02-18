// program to find factorial of any number
#include <stdio.h>
void main()
{
    int n, num;
    long fact = 1;
    printf("enter the number: ");
    scanf("%d", &n);
    num = n;
    if (n < 0)
        printf("no factorial of negative number\n");
    else;
    {
        while (n > 1)
        {
            fact *= n;
            n--;
        }
        printf("factorial of %d=%d\n", num, fact);
    }
}

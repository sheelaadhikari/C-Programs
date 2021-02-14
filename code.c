// write a program to find the number is even or odd
#include <stdio.h>
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("the %d is odd", n);
    else
    {
        printf("the %d is even", n);
    }
}
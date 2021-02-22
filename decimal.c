#include <stdio.h>
void main()
{
    int num, binary, dec = 0, base = 1, rem;
    printf("enter the number: ");
    scanf("%d", &num);
    binary = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("the decimal number is %d", dec);
}

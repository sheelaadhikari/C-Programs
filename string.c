//wap to print the name of student using string.
#include <stdio.h>
void main()
{
    char i, name[3][10];
    for (i = 0; i < 3; i++)
    {
        printf("enter the name of the student: ");
        scanf("%s", name[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }
}
#include<stdio.h>
void main (){
    int a=10, b=6, c=30, d=4, e=90, max;
    max= (a>b)&&(a>c)&&(a>d)&&(a>e)?a:(b>c)&&(b>c)&&(b>e)?b:(c>d)&&(c>e)?c:(d>e)?d:e;
    printf("%d is greater", max);

}
//wap to count the age of 10 people from 35-55 and find the minimum and maximun.
#include <stdio.h>
void main(){
    int age[10], max=0, min=70, i;
    for(i=0; i<5; i++){
    printf("enter the value for[%d]", i);
    scanf("%d", &age[i]);

} 
for(i=0; i<5; i++)
max=age[i]>max?age[i]:max;
min= age[i]<min?age[i]:min;

printf("%d is maximum number \n %d is minimum number ", max, min);
}
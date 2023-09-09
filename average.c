#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int avg=(a+b+c)/3;
    printf("The average of given numbers is:%d",avg);
}

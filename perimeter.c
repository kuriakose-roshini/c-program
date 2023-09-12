#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the sides of your rectangle");
    scanf("%d%d",&a,&b);
    int perimeter =2*(a+b);
    printf("perimeter=%d",perimeter);
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Entered number is a natural number");
    }
    else
    {
        printf("Entered number is not a natural number");
    }
}
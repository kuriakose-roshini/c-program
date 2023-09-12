#include<stdio.h>
void main()
{
    int n,sum=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number is an amstrong number");
    }
    else
    {
        printf("The number is not an amstrong number");
    }

}

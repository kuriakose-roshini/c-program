#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    if(a>='0' && a<='9')
    {
        printf("The given character is a digit");
    }
    else
    {
        printf("The given character is not a digit");
    }
}

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("the largest number is:%d",a);
    }
    if(b>a && b>c)
    {
        printf("the largest number is: %d",b);
    }
    else
    {
        printf("%d is the largest number",c);
        
    }
}
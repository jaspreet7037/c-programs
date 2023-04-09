#include <stdio.h>
void main()
{
    int a,b,n,c;
    printf("Enter the two numbers : \n");
    scanf("%d %d ",&a,&b);
    printf("ENTER CHOICE BELOW \n");
    scanf("%d",&n);
    printf("1.for addition \n");
    printf("2.subtraction \n");
    printf("3.multiplication \n");
    printf("4.division \n");
    switch(n)
    {
        case 1:
        {
            c=a+b;
            printf("%d\n",c);
            break;
        }
        case 2:
        {
            c=a-b;
            printf("%d\n",c);
            break;
        }
        case 3:
        {
            c=a*b;
            printf("%d\n",c);
            break;
        }
        case 4:
        {
            c=a/b;
            printf("%d\n",c);
            break;
        }
        default:
        {
            printf("invalid choice");
        }
    }
}
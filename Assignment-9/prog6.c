#include<stdio.h>
#include<conio.h>

int main()
{
    int n,x,leap;
    printf("Enter one:-");
    scanf("%d",&x);
    printf("\n");
    switch (x)
    {
    case 1:
        printf("Enter a year:-\n");
        scanf("%d",&n);
        if (n%4==0)
        {
            printf("Leap year\n");
        }
        else 
        {
            printf("Non-leap year\n");
        }
        break;
    default:
            printf("Enter invalid value");
        break;
    }
     
    
}
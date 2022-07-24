#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a case number\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Good");
        break;
    case 2:
        printf("Better");
        break;
     case 3:
        printf("Best");
        break;
    case 4:
        printf("ivalid");
        break;
    default:
        printf("Error you're enter ivalid case\n");
        break;
    }
}
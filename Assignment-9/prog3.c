#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
   printf("Enter a day\n");
   scanf("%d",&n);
   switch (n)
   {
   case 1:
        printf("Today is Monday\n");
    break;
    case 2:
        printf("Today is Tuseday\n");
    break;
    case 3:
        printf("Today is Wednesday\n");
    break;
    case 4:
        printf("Today is thrusday\n");
    break;
    case 5:
        printf("Today is Friday\n");
    break;
    case 6:
        printf("Today is saturday\n");
    break;
    case 7:
        printf("Today is Sunday\n");
    break;
   
   default:
        printf("Simething want wrong please check your value\n");
    break;
   }

}
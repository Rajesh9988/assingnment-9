#include<stdio.h>
#include<stdio.h>
void func();
int main()
{   
    int n, a,b,sum=0;
    // operations
    while (1)
    {
        /* code */
    
    printf("\n");
    printf("\n1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");

    printf("\n");
    // choose opration
   
        printf("Choose operation\n");
        scanf("%d",&n);
    // switch statement
    switch (n)
    {
    case 1:
            printf("Enter A and B:-\n");
             scanf("%d%d",&a,&b);
            sum = a+b;
            printf("Addition is:- %d",sum);
            break;
    case 2:
    
            printf("Enter A and B:-\n");
            scanf("%d%d",&a,&b);
            sum = a-b;
            printf("Subtraction is:- %d",sum);
            break;
    case 3:
            printf("Enter A and B:-\n");
            scanf("%d%d",&a,&b);
            sum = a*b;
            printf("Multiplication is:- %d",sum);
            break;
    case 4:
            printf("Enter A and B:-\n");
            scanf("%d%d",&a,&b);
            sum = a/b;
            printf("Division is:- %d",sum);
            break;
    case 5:
            printf("No operation perform\n");
            break;        
    default:
            printf("You're enter invalid operation\n");
            break;
    }
    }
    }
    
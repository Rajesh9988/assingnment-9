#include<stdio.h>

 int main()
{
    int n;
    printf("Enter even number\n");
    scanf("%d",&n);
    switch (n%2==0)
    {
        case 1: printf("%d",1+n);
             break;
        case 0: printf("%d",n);
             break;
    }
}
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, num, sum, number;
    printf("1.Positive to Negitive\n 2.Negitive to Positive\n");
    printf("\n");
    printf("choose expresion\n");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("Enter a num:-\n");
        scanf("%d", &num);
        sum = -num - num;
        n = num + sum;
        printf("%d", n);
        /* code */
        break;
    case 2:
        printf("Enter a num:-\n");
        scanf("%d", &num);
        sum = -num + num;
        n = -0 - num;
        printf("%d", n);
    default:
        break;
    }
}
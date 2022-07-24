#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, s1, s2, s3, x;
    printf("1.check isosceles trangle or not\n");
    printf("2.check right angle trangle or not\n");
    printf("3.check equilatrel trangle or not\n");
    printf("4.Exit");
    printf("\n");
    printf("Choose operation\n");
    scanf("%d", &n);
    printf("\n");

    switch (n)
    {
    case 1:
        printf("Enter s1,s2 & s3:-\n");
        scanf("%d%d%d", &s1, &s2, &s3);
        if (s1 == s2 || s2 == s3 || s3 == s1)
        {
            printf("This is isosceles trangle\n");
        }
        else
            printf("This is not a isosceles trangle\n");
        break;
    case 2:
        printf("Enter s1,s2 & s3:-\n");
        scanf("%d%d%d", &s1, &s2, &s3);
        if ((s1 * s1) + (s2 * s2) == (s3 * s3) || (s1 * s1) + (s3 * s3) == (s2 * s2) || (s2 * s2) + (s3 * s3) == (s1 * s1))
        {
            printf("This is right angle trangle\n");
        }
        else
            printf("This is not a right angle trangle\n");

        break;
    case 3:
        printf("Enter s1,s2 & s3:-\n");
        scanf("%d%d%d", &s1, &s2, &s3);
        if (s1 == s2 && s2 == s3)
        {
            printf("This is equilatrel trangle\n");
        }
        else
            ("This is not a quilatrel trangle\n");
        break;
    case 4:
        exit(0);

    default:
        break;
    }
}
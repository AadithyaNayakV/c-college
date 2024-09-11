#include <stdio.h>
#include <math.h>
int i;
void main()
{
    int a, c;
    c = rand() % 10 + 1; // random number it ill give like java

    for (i = 0; i < 10; i++)
    {
        printf("enter a number\n");
        scanf("%d", &a);
        if (a == c)
        {
            printf("congratulation u entered correct number");
            break;
        }
        else if (a > c)
        {
            printf("ur guess is high\n");
        }
        else if (a < c)
        {
            printf("ur guess is low\n");
        }
        else
        {
            printf("ur guess is wrong\n");
        }
    }
}

#include <stdio.h>
int fact(int s)
{
    if (s == 0)
    {
        return 1;
    }
    else
    {
        return s * fact(s - 1);
    }
}

void main()
{
    int a;
    scanf("%d", &a);
    printf("%d", fact(a));
}
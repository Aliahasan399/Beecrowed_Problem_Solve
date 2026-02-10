#include <stdio.h>

int main()
{
    double a, n, r;
    int p;

    scanf("%lf", &a);

    if (a >= 0 && a <= 400.00)
    {
        p = 15;
    }
    else if (a <= 800.00)
    {
        p = 12;
    }
    else if (a <= 1200.00)
    {
        p = 10;
    }
    else if (a <= 2000.00)
    {
        p = 7;
    }
    else
    {
        p = 4;
    }

    r = a * p / 100.0;
    n = a + r;

    printf("Novo salario: %.2lf\n", n);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: %d %%\n", p);

    return 0;
}

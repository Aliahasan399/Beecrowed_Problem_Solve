#include <stdio.h>

int main()
{

    double A, B, C, pi = 3.14159, t1, c1, t2, q, r;
    scanf("%lf%lf%lf", &A, &B, &C);
    t1 = (1.0 / 2) * (A * C);
    c1 = pi * C * C;
    t2 = (1.0 / 2) * (A + B) * C;
    q = B * B;
    r = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", t1, c1, t2, q, r);

    return 0;
}
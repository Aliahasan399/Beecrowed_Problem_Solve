#include <stdio.h>
#include <math.h>
int main()
{

    double A, B, C, R1, R2, D, a;
    scanf("%lf%lf%lf", &A, &B, &C);
    D = B * B - 4 * A * C;
    a = 2 * A;
    if (D < 0 || a == 0)
        printf("Impossivel calcular\n");
    else
    {
        R1 = (-B + sqrt(D)) / a;
        R2 = (-B - sqrt(D)) / a;
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}
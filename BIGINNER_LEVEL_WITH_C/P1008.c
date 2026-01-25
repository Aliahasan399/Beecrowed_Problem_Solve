#include <stdio.h>

int main()
{
    int A, B;
    double C;
    scanf("%d %d", &A, &B);
    scanf("%lf", &C);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", A, B * C);
    return 0;
}
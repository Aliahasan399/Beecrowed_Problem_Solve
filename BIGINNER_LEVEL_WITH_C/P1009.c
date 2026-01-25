#include <stdio.h>

int main()
{
    char A[100];
    double B, C;
    fgets(A, sizeof(A), stdin);
    scanf("%lf%lf", &B, &C);
    printf("TOTAL = R$ %.2lf\n", B + (C * 15 / 100));
    return 0;
}
#include <stdio.h>

int main()
{
    int N, C, X, Y;
    scanf("%d", &N);
    X = N / 365;
    Y = (N - X * 365) / 30;
    C = (N - X * 365) - Y * 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", X, Y, C);
    return 0;
}
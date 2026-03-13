#include <stdio.h>

int main()
{
    int N, C, X, Y;
    scanf("%d", &N);
    X = N / 3600;
    Y = (N - X * 3600) / 60;
    C = (N - X * 3600) - Y * 60;
    printf("%d:%d:%d\n", X, Y, C);
    return 0;
}
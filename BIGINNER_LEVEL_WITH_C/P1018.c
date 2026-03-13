#include <stdio.h>

int main()
{

    int N, X, rem[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &N);
    printf("%d\n", N);
    for (int i = 0; i < 7; i++)
    {
        X = N / rem[i];
        printf("%d nota(s) de R$ %d,00\n", X, rem[i]);
        N = N % rem[i];
    }

    return 0;
}
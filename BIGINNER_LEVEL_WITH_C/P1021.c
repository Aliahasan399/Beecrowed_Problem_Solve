#include <stdio.h>

int main()
{
    int Y;
    double N;
    scanf("%lf", &N);
    printf("NOTAS:\n");
    int taka[] = {10000, 5000, 2000, 1000, 500, 200};
    int coin[] = {100, 50, 25, 10, 5, 1};
    int x = N * 100;
    for (int i = 0; i < 6; i++)
    {
        Y = x / taka[i];
        printf("%d nota(s) de R$ %.2f\n", Y, taka[i] / 100.0);
        x = x % taka[i];
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {
        Y = x / coin[i];
        printf("%d moeda(s) de R$ %.2f\n", Y, coin[i] / 100.0);
        x = x % coin[i];
    }
    return 0;
}
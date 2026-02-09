#include <stdio.h>

int main()
{
    int a, b, c, d;
    int hour, minute;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == c && b == d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if (a == c && b < d)
    {
        hour = 0;
        minute = d - b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }
    else if (a == c && b > d)
    {
        hour = 23;
        minute = 60 - b + d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    else if (a < c && b <= d)
    {
        hour = c - a;
        minute = d - b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    else if (a < c && b > d)
    {
        hour = (c - a) - 1;
        minute = 60 - b + d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    else if (a > c && b <= d)
    {
        hour = (24 - a) + c;
        minute = d - b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    else if (a > c && b > d)
    {
        hour = (24 - a) + c - 1;
        minute = 60 - b + d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    return 0;
}

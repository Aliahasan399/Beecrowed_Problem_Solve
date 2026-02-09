#include <stdio.h>

int main()
{
    int a, b, count1 = 0;
    int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};

    scanf("%d %d", &a, &b);

    if (a == b)
    {
        count1 = 24;
    }
    else if (a < b)
    {

        for (int i = 0; i < 24; i++)
        {
            if (num[i] >= a && num[i] < b)
                count1++;
        }
    }
    else
    {

        for (int i = 0; i < 24; i++)
        {
            if (num[i] >= a || num[i] < b)
                count1++;
        }
    }

    printf("O JOGO DUROU %d HORA(S)\n", count1);

    return 0;
}

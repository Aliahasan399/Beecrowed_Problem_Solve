#include <stdio.h>

int main()
{

    int N[100], X, first;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &N[i]);
    }
    first = N[0];
    for (int i = 0; i < 100; i++)
    {
        if (first < N[i])
            first = N[i];
    }
    for (int i = 0; i < 100; i++)
    {
        if (first == N[i])
            X = i + 1;
    }
    printf("%d\n%d\n", first, X);

    return 0;
}
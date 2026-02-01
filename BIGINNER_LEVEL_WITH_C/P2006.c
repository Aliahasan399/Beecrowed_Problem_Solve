#include <stdio.h>

int main()
{

    int A, B, C, D, E, T, count = 0;
    scanf("%d", &T);

    scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
    if (T == A)
    {
        count += 1;
    }
    if (T == B)
    {
        count += 1;
    }
    if (T == C)
    {
        count += 1;
    }
    if (T == D)
    {
        count += 1;
    }
    if (T == E)
    {
        count += 1;
    }
    printf("%d\n", count);
    return 0;
}
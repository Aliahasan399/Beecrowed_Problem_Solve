#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int A, B, C, MajorAB, Major;
    scanf("%d%d%d", &A, &B, &C);
    MajorAB = (A + B + abs(A - B)) / 2;
    Major = (MajorAB + C + abs(MajorAB - C)) / 2;
    printf("%d eh o maior\n", Major);
    return 0;
}
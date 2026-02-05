#include <stdio.h>

int main()
{
    float N1, N2, N3, N4, X, average, nota;
    scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);

    printf("Media: %.1f\n", average);
    if (average >= 7.0)
        printf("Aluno aprovado.\n");
    else if (average < 5.0)
        printf("Aluno reprovado.\n");
    else if (average >= 5.0 && average <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &X);
        printf("Nota do exame: %.1f\n", X);
        nota = (X + average) / 2;
        if (nota >= 5.0)
            printf("Aluno aprovado.\n");
        if (nota <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", nota);
    }

    return 0;
}
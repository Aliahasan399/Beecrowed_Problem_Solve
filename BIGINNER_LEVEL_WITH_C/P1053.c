#include <stdio.h>

int main()
{

    float masum;
    scanf("%f", &masum);
    if (masum >= 0.00 && masum <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (masum >= 2000.01 && masum <= 3000.00)
    {
        masum = masum - 2000;
        float p = (masum) * (0.08);
        printf("R$ %.2f\n", p);
    }
    else if (masum >= 3000.01 && masum <= 4500.00)
    {
        masum = masum - 3000;
        float x = 1000 * (8.0 / 100);
        float p = (masum) * (0.18);
        printf("R$ %.2f\n", p + x);
    }
    else if (masum > 4500.00)
    {
        masum = masum - 3000;
        float x = 1000 * (8.0 / 100);
        float y = 1500 * (18.0 / 100);
        float p = (masum - 1500) * (0.28);
        printf("R$ %.2f\n", p + x + y);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    while (N--)
    {
        char s[1001];
        fgets(s, 1001, stdin);
        s[strcspn(s, "\n")] = '\0';

        int len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z'))
            {
                s[i] = s[i] + 3;
            }
        }

        for (int i = 0; i < len / 2; i++)
        {
            char temp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = temp;
        }

        for (int i = len / 2; i < len; i++)
        {
            s[i] = s[i] - 1;
        }

        printf("%s\n", s);
    }

    return 0;
}

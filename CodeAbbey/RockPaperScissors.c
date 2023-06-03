#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        char n[1000];
        scanf(" %[^\n]", n);

        int len = strlen(n);
        int a = 0, b = 0;

        for (int i = 0; i < len; i += 3)
        {
            char p[2];
            p[0] = n[i];
            p[1] = n[i + 1];

            if ((p[0] == 'R' && p[1] == 'S') || (p[0] == 'P' && p[1] == 'R') || (p[0] == 'S' && p[1] == 'P'))
            {
                a++;
            }
            else if ((p[0] == 'S' && p[1] == 'R') || (p[0] == 'P' && p[1] == 'S') || (p[0] == 'R' && p[1] == 'P'))
            {
                b++;
            }
        }

        if (a > b)
        {
            printf("1 ");
        }
        else
        {
            printf("2 ");
        }
    }

    return 0;
}

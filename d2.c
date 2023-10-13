#include <stdio.h>

int main()
{
    int i, p, v, t, r = 0;
    scanf("%d", &i);

    while (i--)
    {
        scanf("%d%d%d", &p, &v, &t);

        if (p == 1 && v == 1)
        {
            r++;
        }
        else if (v == 1 && t == 1)
        {
            r++;
        }
        else if (p == 1 && t == 1)
        {
            r++;
        }
        else
        {
            continue;
        }
    }

    printf("%d", r);

    return 0;
}
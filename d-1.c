#include <stdio.h>

int doDiv(int w)
{
    if (w % 2 == 0 && w > 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int w;
    scanf("%d", &w);

    if (doDiv)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
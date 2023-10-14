#include <stdio.h>

int main()
{
    int n, k;
    int v[100];
    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v[i]);
    }

    while (k > 0 && v[k] == 0)
    {
        k--;
    }

    while (k + 1 <= n && v[k + 1] == v[k])
    {
        k++;
    }

    printf("%d\n", k);

    return 0;
}
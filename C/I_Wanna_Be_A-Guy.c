#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int levels[100] = {0};
    int p;
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        int level;
        scanf("%d", &level);
        levels[level] = 1;
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int level;
        scanf("%d", &level);
        levels[level] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (levels[i] == 0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
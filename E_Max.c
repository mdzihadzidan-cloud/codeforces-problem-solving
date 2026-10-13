#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int y = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > y)
        {
            y = x;
        }
    }
    printf("%d\n", y);
    return 0;
}
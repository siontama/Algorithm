#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i + 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}

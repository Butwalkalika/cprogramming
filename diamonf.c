#include <stdio.h>
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    for(int i = 0;i<=n;i++){

    
    for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
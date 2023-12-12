#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)

        {
            for (int u = 1; u <= n; u++)
            {
                printf("* ");
            }
            printf("\n");
        }
      
    }
    

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <Stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int u = 1; u <= n; u++)
            {
                if (i == 1 || i == n)
                    printf("*");
                else
                    printf(" ");
                

               

            }
            printf("\n");



            return 0;
        }
    }
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n = 1, i = 1, sum = 0;
    while (n <= 10000)
    {
        while (i <= n - 1)
        {
            if (i == 1)
            {
                sum = sum + 1;
            }
            else if (i == n - 1)
            {
                sum = sum + 0;
            }
            else if (n % i == 0)
            {
                sum = sum + i;
            }
            i++;
        }

        if (sum == n)
        {
            printf("%d\n", sum);
        }
        sum = 0;
        n++;
        i = 1;
    }

    return 0;
}
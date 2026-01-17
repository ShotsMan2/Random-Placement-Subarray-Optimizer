#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sayi, i, j, n, r, sum, dizi[999], max, k;

    printf("n i giriniz");
    scanf("%d", &n);

    sum = 2;

    for (i = 0; i < n; i++)
    {
        dizi[i] = 9999;
    }

    srand(time(NULL));

    for (i = 0; i < n; i++)
    {
        for (;;)
        {
            sayi = rand() % 21 - 10;
            if (sum % 2 == 0)
            {
                if (sayi < 0)
                {
                    printf("%d ", sayi);
                    for (;;)
                    {
                        r = rand() % n;
                        if (dizi[r] == 9999)
                        {
                            dizi[r] = sayi;
                            break;
                        }
                    }
                    sum++;
                    break;
                }
            }
            else
            {
                if (sayi > 0)
                {
                    printf("%d ", sayi);

                    for (;;)
                    {
                        r = rand() % n;
                        if (dizi[r] == 9999)
                        {
                            dizi[r] = sayi;
                            break;
                        }
                    }
                    sum++;
                    break;
                }
            }
        }
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", dizi[i]);
    }

    printf("\n");

    max = 0;
    k = n / 2;

    for (i = 0; i <= n / 2; i++)
    {
        sum = 0;

        for (j = i; j < i + k; j++)
        {
            sum = sum + dizi[j];
        }
        if (max < sum)
        {
            max = sum;
        }
    }
    printf("%d ", max);
}

#include <stdio.h>
int main()
{
    float n, N[2], avg;
    int j = 0, x;
    while (1)
    {
    while (1)
    {
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            N[j] = n;
            j++;
        }
        else printf("nota invalida\n");
        if (j > 1) break;
    }
    avg = ((N[0] + N[1])/2.0);
    printf("media = %.2f\n", avg);
    j = 0;
    while (1)
    {
        scanf("%d", &x);
        printf("novo calculo (1-sim 2-nao)\n");
        if (x == 1 || x == 2) break;
    }
    if (x == 1) continue;
    break;
    }

    return 0;
}

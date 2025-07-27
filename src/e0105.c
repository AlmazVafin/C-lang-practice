#include <stdio.h>

int main(void)
{
    int x = 0;
    float pi = 3.141;

    scanf("%d", &x);
    if (x==0) printf("%.1f", pi * x);
    else printf("%.2f", pi * x);

    return 0;
}
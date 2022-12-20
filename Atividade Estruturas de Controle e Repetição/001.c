#include <stdio.h>

int main()
{
    int i;
    float num, soma;
    num = 0;
    soma = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &num);
        soma += num;
    }
    printf("%.2f", soma);
}

#include <stdio.h>

int main()
{
    int i;
    int num, maior, menor;
    num = 0;
    maior = 0;
    menor = 0;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &num);
        if (i == 0)
        {
            maior = num;
            menor = num;
        }
        if (num > maior)
        {
            maior = num;
        }
        else if (num < menor)
        {
            menor = num;
        }
        
    }
    printf("%d", maior);
    printf("\n%d", menor);
}

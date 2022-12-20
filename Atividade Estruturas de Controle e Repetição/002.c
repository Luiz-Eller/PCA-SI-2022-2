#include <stdio.h>

int main()
{
    int i;
    int num, soma;
    num = 0;
    soma = 0;
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num);
        if(num % 2 == 1)
        {
            soma += num;
        }
        
    }
    printf("%d", soma);
}

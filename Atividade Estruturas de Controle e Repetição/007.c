#include <stdio.h>
#include <locale.h>

int main()
{
    int alunos, i;
    float n1, n2, n3, m;
    float maior_1 = 0, menor_1 = 10, maior_2 = 0, menor_2 = 10;
    float maior_3 = 0, menor_3 = 10, maior_m = 0, menor_m = 10;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Número de alunos: ");
    scanf("%d", &alunos);
    
    for (i = 0; i < alunos; i++)
    {
        printf("Aluno %d, 1º Nota: ", i);
        scanf("%f", &n1);
        printf("Aluno %d, 2º Nota: ", i);
        scanf("%f", &n2);
        printf("Aluno %d, 3º Nota: ", i);
        scanf("%f", &n3);
        m = (n1 + n2 + n3) / 3;
        if (n1 > maior_1)
        {
            maior_1 = n1;
        }
        if (n1 < menor_1)
        {
            menor_1 = n1;
        }
        
        if (n2 > maior_2)
        {
            maior_2 = n2;
        }
        if (n2 < menor_2)
        {
            menor_2 = n2;
        }
        
        if (n3 > maior_3)
        {
            maior_3 = n3;
        }
        if (n3 < menor_3)
        {
            menor_3 = n3;
        }
        
        if (m > maior_m)
        {
            maior_m = m;
        }
        if (m < menor_m)
        {
            menor_m = m;
        }
    }
    printf("Menor Nota 1: %.1f\n", menor_1);
    printf("Maior Nota 1: %.1f\n\n", maior_1);
    
    printf("Menor Nota 2: %.1f\n", menor_2);
    printf("Maior Nota 2: %.1f\n\n", maior_2);
    
    printf("Menor Nota 3: %.1f\n", menor_3);
    printf("Maior Nota 3: %.1f\n\n", maior_3);
    
    printf("Menor Média: %.1f\n", menor_m);
    printf("Maior Média: %.1f\n\n", maior_m);
}

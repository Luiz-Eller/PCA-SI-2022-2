#include <stdio.h>

int main()
{
    char nome[100];
    char sexo = 's';
    int idade = 0;
    printf("Preencha os dados pedidos\n");
    printf("Nome: ");
    gets(nome);
    printf("Sexo (M/F): ");
    scanf("%c", &sexo);
    printf("Idade: ");
    scanf("%d", &idade);
    if (sexo == 'F')
    {
        printf("É mulher");
    }
    else
    {
        printf("Não é mulher");
    }
    return 0;
}

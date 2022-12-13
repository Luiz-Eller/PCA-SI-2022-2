#include <stdio.h>

int main()
{
    float salario = 0;
    float novoSalario = 0;
    printf("Salario Atual: ");
    scanf("%f", &salario);
    novoSalario = salario * 1.1;
    printf("O novo salario com reajuste é de: %.2f", novoSalario);
}

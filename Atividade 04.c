#include <stdio.h>

int main()
{
    float vlrConta = 0;
    float gorjeta = 0;
    printf("Valor da conta: ");
    scanf("%f", &vlrConta);
    gorjeta = vlrConta * 0.1;
    printf("Valor do garçom é de: %.2f", gorjeta);
}

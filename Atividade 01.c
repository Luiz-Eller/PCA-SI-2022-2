#include <stdio.h>

int main()
{
    float base, altura, area;
    base = 0;
    altura = 0;
    area = 0;
    printf("Base do Triângulo: ");
    scanf("%f", &base);
    printf("Altura do Triângulo: ");
    scanf("%f", &altura);
    area = base * altura / 2;
    printf("Area do triângulo é de: %.1f", area);
}

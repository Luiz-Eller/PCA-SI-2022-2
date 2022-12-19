#include <stdio.h>

int main()
{
    float altura, peso;
    altura = 0;
    peso = 0;
    scanf("%f", &altura);
    peso = (72.7*altura) - 58;
    printf("%.2f", peso);
    return 0;
}

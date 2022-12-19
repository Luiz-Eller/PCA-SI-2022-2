#include <stdio.h>

int main()
{
    float ganho_por_hora, horas_trabalhadas, montante;
    ganho_por_hora = 0;
    horas_trabalhadas = 0;
    montante = 0;
    scanf("%f", &ganho_por_hora);
    scanf("%f", &horas_trabalhadas);
    montante = horas_trabalhadas * ganho_por_hora;
    printf("%.2f", montante);
    return 0;
}

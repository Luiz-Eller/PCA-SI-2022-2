#include <stdio.h>

int main()
{
    float ganho_hora, num_hora, sal_bruto, sal_liquido,
            inss, sindicado, imp_renda;
    ganho_hora = 0;
    num_hora = 0;
    sal_bruto = 0;
    sal_liquido = 0;
    inss = 0;
    sindicado = 0;
    imp_renda = 0;
    scanf("%f", ganho_hora);
    scanf("%f", num_hora);
    sal_bruto = ganho_hora * num_hora;
    imp_renda = sal_bruto * 0.11;
    inss = sal_bruto * 0.08;
    sindicado = sal_bruto * 0.05;
    sal_liquido = sal_bruto - imp_renda - inss - sindicado;
    printf("%.2f", sal_bruto);
    printf("\n%.2f", inss);
    printf("\n%.2f", sindicado);
    printf("\n%.2f", sal_liquido);
    return 0;
}

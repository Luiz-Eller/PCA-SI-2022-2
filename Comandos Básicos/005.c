#include <stdio.h>

int main()
{
    float l, area;
    l = 0;
    area = 0;
    scanf("%f", &l);
    area = l * l;
    printf("%.2f", (area * 2));
    return 0;
}

#include <stdio.h>

int main()
{
    float r, area;
    r = 0;
    area = 0;
    scanf("%f", &r);
    area = 3.141592 * r * r;
    printf("%.2f", area);
    return 0;
}

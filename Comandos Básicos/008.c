#include <stdio.h>

int main()
{
    float f, c;
    f = 0;
    c = 0;
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%.2f", c);
    return 0;
}

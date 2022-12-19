#include <stdio.h>

int main()
{
    int a, b;
    float c;
    a = 0;
    b = 0;
    c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    printf("%d", (a * b));
    printf("\n%.2f", (3 * a + c));
    printf("\n%.2f", (c * c * c));
    return 0;
}

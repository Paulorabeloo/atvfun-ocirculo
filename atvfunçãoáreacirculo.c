#include <stdio.h>
#include <math.h>

float area_circulo(float raio)
{
    return M_PI * pow(raio, 2);
}

int main()
{
    float r, area;
    scanf("%f", &r);
    area = area_circulo(r);
    printf("A �rea do c�rculo �: %f\n", area);
    return 0;
}

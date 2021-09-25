#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    printf("¬ведите кординаты первой точки:");
    scanf("%f %f", &x1, &y1);
    printf("¬ведите кординаты второй точки:");
    scanf("%f %f", &x2, &y2);
    if (x1 < 0) { x1 = fabsf(x1); }
    if (x1 < 0) { x2 = fabsf(x2); }
    if (x1 < 0) { y1 = fabsf(y2); }
    if (x1 < 0) { y2 = fabsf(y2); }
    printf("%f", x1);
    return 0;
}
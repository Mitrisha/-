#include <stdio.h>
#include <locale.h>
#include < stdlib.h >
#include < math.h >

int main()
{
    setlocale(LC_ALL, "Rus");
    float a = 0, b = 0, d = 0;
    float p = 3.14, k = 0,m = 0;
    printf("Введите стороны прямоугольника:");
    scanf("%f", &a);
    scanf("%f", &b);
    int S = a * b;
    int P = 2 * (a + b);
    printf("Площаль: %d\n", S);
    printf("Периметр: %d\n", P);
    printf("Введите диаметр окружности:");
    scanf("%f", &d);
    float L = p * d;
    printf("Длинна окружности: %f\n", L);
    printf("Введите два числа:");
    scanf("%f", &k);
    scanf("%f", &m);
    float Sr = (k + m) / 2;
    printf("Среднее aрифметическое = %f\n", Sr); 
    printf("Введите два ненулевых числа:");
    scanf("%f", &a);
    scanf("%f", &b);
    int sum = a * a + b * b;
    int raz = a * a - b * b;
    int proizv = a * a * b * b;
    float chast = (a * a) / (b * b);
    printf("Сумма их квадратов: %d\n", sum);
    printf("Разность их квадратов: %d\n", raz);
    printf("Произведение их квадратов: %d\n", proizv);
    printf("Частное их квадратов: %f\n", chast);
    printf("Введите два ненулевых числа:");
    scanf("%f", &a);
    scanf("%f", &b);
    int su = abs(a) + abs(b);
    int ra = abs(a) - abs(b);
    int proiz = abs(a) * abs(b);
    float chas = fabsf(a) / fabsf(b);
    printf("Сумма их модулей: %d\n", su);
    printf("Разность их модулей: %d\n", ra);
    printf("Произведение их модулей: %d\n", proiz);
    printf("Частное их модулей: %f\n", chas);
    return 0;
}

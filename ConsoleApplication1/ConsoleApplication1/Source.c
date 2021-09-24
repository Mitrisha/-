#include <stdio.h>
#include <locale.h>
#include < stdlib.h >

int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 0, d = 0;
    float p = 3.14;
    printf("Введите стороны прямоугольника:");
    scanf("%d", &a);
    scanf("%d", &b);
    int S = a * b;
    int P = 2 * (a + b);
    printf("Площаль: %d\n", S);
    printf("Периметр: %d\n", P);
    printf("Введите диаметр окружности:");
    scanf("%d", &d);
    float L = p * d;
    printf("Длинна окружности: %f\n", L);
    printf("Введите два числа:");
    scanf("%d", &a);
    scanf("%d", &b);
    int Sr = (a + b) / 2;
    printf("Среднее aрифметическое = %d\n", Sr); 
    printf("Введите два ненулевых числа:");
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = a * a + b * b;
    int raz = a * a - b * b;
    int proizv = a * a * b * b;
    int chast = (a * a) / (b * b);
    printf("Сумма их квадратов: %d\n", sum);
    printf("Разность их квадратов: %d\n", raz);
    printf("Произведение их квадратов: %d\n", proizv);
    printf("Частное их квадратов: %d\n", chast);
    printf("Введите два ненулевых числа:");
    scanf("%d", &a);
    scanf("%d", &b);
    int su = abs(a) + abs(b);
    int ra = abs(a) - abs(b);
    int proiz = abs(a) * abs(b);
    int chas = abs(a) / abs(b);
    printf("Сумма их модулей: %d\n", su);
    printf("Разность их модулей: %d\n", ra);
    printf("Произведение их модулей: %d\n", proiz);
    printf("Частное их модулей: %d\n", chas);
    return 0;
}

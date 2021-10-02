#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

float rast(float x1, float x2) {
    float x = x2 - x1;
    if (x < 0) {
        x = fabsf(x);
    }
    return x;
}
float dlin(float A1, float A2) {
    float AC = A2 - A1;
    if (AC < 0) {
        AC = fabsf(AC);
    }
    return AC;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    printf("Программа умеет:\n");
    printf("1.Нахожение растояния между двумя точками по кординатам.\n");
    printf("2.Нахождение длинн отрезков AC и BC на числовой прямой.\n");
    printf("3.Нахождение произведения отрезков AC и BC на числовой прямой.(C находится между A и B)\n");
    printf("4.Нахождение периметра и площади прямоугольника по кординатам вершин.\n");
    printf("5.Нахождение периметра и площади треугольника по кординатам вершин.\n");
    printf("Введите номер задания:");
    int Q = 0;
    scanf("%d", &Q);
    if (Q == 1) {
        float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        printf("Введите кординаты первой точки:");
        scanf("%f %f", &x1, &y1);
        printf("Введите кординаты второй точки:");
        scanf("%f %f", &x2, &y2);
        float x = rast(x1, x2);
        float y = rast(y1, y2);
        float S = sqrt(y * y + x * x);
        printf("%f", S);
    }
    if (Q == 2) {
        float A = 0, B = 0, C = 0;
        printf("Введите число A:");
        scanf("%f", &A);
        printf("Введите число B:");
        scanf("%f", &B);
        printf("Введите число C:");
        scanf("%f", &C);
        float AC = dlin(A, C);
        printf("AC=%f\n", AC);
        float BC = dlin(B, C);
        printf("BC=%f\n", BC);
        float Sum = BC + AC;
        printf("AC + BC = %f", Sum);
    }
    if (Q == 3) {
        float A = 0, B = 0, C = 0;
        printf("Введите число A:");
        scanf("%f", &A);
        printf("Введите число C:");
        scanf("%f", &C);
        printf("Введите число B:");
        scanf("%f", &B);
        float AC = dlin(A, C);
        float BC = dlin(A, B);
        float S2 = AC * BC;
        printf("AC * BC = %f", S2);
    }
    if (Q == 4) {
        float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        printf("Введите кординаты первой точки:");
        scanf("%f %f", &x1, &y1);
        printf("Введите кординаты второй точки:");
        scanf("%f %f", &x2, &y2);
        float x = rast(x1, x2);
        float y = rast(y1, y2);
        float P = 2 * x + 2 * y;
        float S = x * y;
        printf("Периметр: %f\n", P);
        printf("Площадь: %f", S);
    }
    if (Q == 5) {
        float x1 = 0, x2 = 0, y1 = 0, y2 = 0, x3 = 0, y3 = 0;
        printf("Введите кординаты первой точки:");
        scanf("%f %f", &x1, &y1);
        printf("Введите кординаты второй точки:");
        scanf("%f %f", &x2, &y2);
        printf("Введите кординаты третьей точки:");
        scanf("%f %f", &x3, &y3);
        float x = rast(x1, x2);
        float y = rast(y1, y2);
        float a = sqrt(y * y + x * x);
        x = rast(x2, x3);
        y = rast(y2, y3);
        float b = sqrt(y * y + x * x);
        x = rast(x1, x3);
        y = rast(y1, y3);
        float c = sqrt(y * y + x * x);
        float p = a + b + c;
        float S = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
        printf("Периметр =%f\n", p);
        printf("Площадь = %f", S);
    }
    return 0;
}

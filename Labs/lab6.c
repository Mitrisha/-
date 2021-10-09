#include <locale.h>
#include <stdio.h>
#include <math.h>
float k = 0;
int main()
{
    printf("Программа умеет:\n");
    printf("1. Поменять местами содержимое переменных A и B и вывести новые значения A и B\n");
    printf("2.Переместить содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C\n");
    printf("3.Переместить содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C\n");
    printf("4.Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x\n");
    printf("5.Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x\n");
    printf("6.Дано число A. Вычислить A8 , используя вспомогательную переменную и три операции умножения\n");
    printf("7.Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения\n");
    printf("Выберите пункт:");
    setlocale(LC_ALL, "Rus");
    float Q = 0;
    scanf("%f", &Q);
    if (Q == 1) {
        int A = 0, B = 0;
        printf("Ведите А и В:");
        scanf("%d", &A);
        scanf("%d", &B);
        k = A;
        A = B;
        B = k;
        printf("A=%d\n", A);
        printf("B=%d", B);
    }
    if (Q == 2) {
        int A = 0, B = 0, C = 0, k = 0, k1 = 0;
        printf("Ведите А и В и С:");
        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &C);
        k = B;
        k1 =C;
        B = A;
        C = k;
        A = k1;
        printf("A=%d\n", A);
        printf("B=%d\n", B);
        printf("C=%d", C);
    }
    if (Q==3){
        int A = 0, B = 0, C = 0, k = 0, k1 = 0;
        printf("Ведите А и В и С:");
        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &C);
        k = B;
        k1 =C;
        C = A;
        B = k1;
        A = k;
        printf("A=%d\n", A);
        printf("B=%d\n", B);
        printf("C=%d", C);
    }
    if (Q==4){
        int x = 0;
        printf("Введите x:");
        scanf("%d", &x);
        int y = 3*pow(x,6) - 6*pow(x,2) - 7;
        printf("В уравнение y = 3x6 − 6x2 − 7; y=%d", y);
    }
    if (Q == 5){
        int x = 0;
        printf("Введите x:");
        scanf("%d", &x);
        int y = 4*pow(x-3,6) - 7*pow(x-3,3) + 2;
        printf("В уравнение y = 4(x−3)6 − 7(x−3)3 + 2; y=%d", y); 
    }
    if (Q == 6){
        int i = 0, b = 0, A = 0;
        printf("Введите A:");
        scanf("%d", &i);
        b = pow(i,2);
        A = b*b*b*b;
        printf("A в 8 степени = %d", A); 
    }
    if (Q == 7){
        int i = 0, b = 0, A = 0, c = 0;
        printf("Введите A:");
        scanf("%d", &i);
        b = pow(i,2);
        c = pow(i,5);
        A = b*b*b*b*b*c;
        printf("A в 15 степени = %d", A);         
    }
    return 0;
}
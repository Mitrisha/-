#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int i = 5, Q = 0;
    while (i != 0){
        printf("Введите номер задания:");
        scanf("%d", &Q);
        if (Q==1){
            float a = 0,pi = 3.14;
            printf("Введите")
            scanf("%f", &a);
            float R = a*pi/180;
            printf("%f\n", R);
        }
        printf("Нажмите 1, чтобы прожолжить или 0, чтобы закончить:");
        scanf("%d",&i);
    }
    return 0;
}
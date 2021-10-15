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
            printf("Введите значение угла α в градусах(0 < α < 360)");
            scanf("%f", &a);
            float R = a*pi/180;
            printf("Угол в радианах =%f\n", R);
        }
        if (Q==2){
            float a = 0,pi = 3.14;
            printf("Введите значение угла α в радианах(0 < α < 2·π)");
            scanf("%f", &a);
            float R = a*180/pi;
            printf("Угол в градусах =%f\n", R);
        }
        if (Q==3){
            float X = 0,A = 0, Y = 0;
            printf("Введите сколько килограм конфет есть у вас:");
            scanf("%f", &X);
            printf("Введите сколько они стоят:");
            scanf("%f", &A);
            float b = A/X;
            printf("1кг конфет будет стоить:%f",b);
            printf("рублей\n");
            printf("Введите сколько килограм конфет вы бы хотели получить:");
            scanf("%f", &Y);
            X = Y*b;
            printf("Это будет стоить вам:%f", X);
            printf("рублей\n");
        }
        if (Q==4){
            float v1 = 0,v2 = 0, S = 0, T = 0;
            printf("Введите скорость первого и второго автомобиля(км/ч):");
            scanf("%f %f", &v1,&v2);
            printf("Введите растояние между ними(км):");
            scanf("%f", &S);
            printf("Сколько времени прошло(ч):");
            scanf("%f", &T);
            float R = v1*T + v2*T + S;
            printf("Растояние между ними:%f", R);
            printf("километров\n");
        }
        if (Q==5){
            float A = 0, B = 0;
            printf("Введите значение A,B(A не равно 0):");
            scanf("%f %f", &A,&B);
            float x = -B/A;
            printf("X=%f\n", x);
        }
        if (Q==6){
            float A1 = 0, A2 = 0,B1 = 0, B2 = 0, C1 = 0, C2 = 0, X = 0, Y = 0;
            printf("Введите значение A1,A2:");
            scanf("%f %f", &A1,&A2);
            printf("Введите значение B1,B2:");
            scanf("%f %f", &B1,&B2);
            printf("Введите значение C1,C2:");
            scanf("%f %f", &C1,&C2);
            X = (C1*B2 - C2*B1)/(A1*B2 - A2*B1);
            Y = (C1 - A1*X)/B1;
            printf("X=%f\n",X);
            printf("Y=%f\n",Y);
        }
        printf("Нажмите 1, чтобы прожолжить или 0, чтобы закончить:");
        scanf("%d",&i);
    }
    return 0;
}
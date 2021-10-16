#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
int main()
{
    int Q = 0;
    setlocale(LC_ALL, "Rus");
    printf("Введите номер задания(0, чтобы закончить):");
    scanf("%d", &Q);
    while (Q !=0){
        if(Q == 1){
            int a = 0;
            printf("Введите количество байт:");
            scanf("%d", &a);
            int s = a/1024;
            if (a/1024 == s){
                s++;
            }
            printf("%d\n", s);
        }
        if (Q == 2){
            float A = 0,B = 0;
            printf("Введите A,B(A > B):");
            scanf("%f %f", &A, &B);
            if (A > B){
                int S = A/B;
                printf("В помещается в А:%d\n",S);
            }
            else{printf("B > A");}
        }
        if (Q == 3){
            float A = 0,B = 0;
            printf("Введите A,B(A > B):");
            scanf("%f %f", &A, &B);
            int S = A/B;
            float S1 = A - S*B;
            printf("Длина незанятой части отрезка A:%f\n",S1);
        }
        if (Q == 4){
            int A = 0;
            printf("Введите двухзначное число:");
            scanf("%d", &A);
            int S = A/10;
            int S1 = A%10;
            printf("%d%d\n",S1,S);
        }
        if (Q == 4){
            int A = 0;
            printf("Введите двухзначное число:");
            scanf("%d", &A);
            int S = A/10;
            int S1 = A%10;
            printf("%d%d\n",S1,S);
        }
        if (Q == 5){
            int A = 0;
            printf("Введите трёхзначное число:");
            scanf("%d", &A);
            int S = A/100;
            int S1 = A%100;
            printf("%d%d\n",S1,S);
        }
        printf("Введите номер задания(0, чтобы закончить):");
        scanf("%d", &Q);
    }
    return 0;
}
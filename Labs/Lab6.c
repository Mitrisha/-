#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
float k = 0;
int main()
{
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
        int A = 0, B = 0, C = 0;
        printf("Ведите А и В и С:");
        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &C);
        k = B;
        A = C;
        B = A;
        C = k;
        printf("A=%d\n", A);
        printf("B=%d", B);
        printf("C=%d", C);
    }
    return 0;
}
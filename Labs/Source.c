#include <stdio.h>
#include <locale.h>
#include < stdlib.h >
#include < math.h >

int main()
{
    setlocale(LC_ALL, "Rus");
    float a = 0, b = 0, d = 0;
    float p = 3.14, k = 0,m = 0;
    printf("������� ������� ��������������:");
    scanf("%f", &a);
    scanf("%f", &b);
    int S = a * b;
    int P = 2 * (a + b);
    printf("�������: %d\n", S);
    printf("��������: %d\n", P);
    printf("������� ������� ����������:");
    scanf("%f", &d);
    float L = p * d;
    printf("������ ����������: %f\n", L);
    printf("������� ��� �����:");
    scanf("%f", &k);
    scanf("%f", &m);
    float Sr = (k + m) / 2;
    printf("������� a������������� = %f\n", Sr); 
    printf("������� ��� ��������� �����:");
    scanf("%f", &a);
    scanf("%f", &b);
    int sum = a * a + b * b;
    int raz = a * a - b * b;
    int proizv = a * a * b * b;
    float chast = (a * a) / (b * b);
    printf("����� �� ���������: %d\n", sum);
    printf("�������� �� ���������: %d\n", raz);
    printf("������������ �� ���������: %d\n", proizv);
    printf("������� �� ���������: %f\n", chast);
    printf("������� ��� ��������� �����:");
    scanf("%f", &a);
    scanf("%f", &b);
    int su = abs(a) + abs(b);
    int ra = abs(a) - abs(b);
    int proiz = abs(a) * abs(b);
    float chas = fabsf(a) / fabsf(b);
    printf("����� �� �������: %d\n", su);
    printf("�������� �� �������: %d\n", ra);
    printf("������������ �� �������: %d\n", proiz);
    printf("������� �� �������: %f\n", chas);
    return 0;
}

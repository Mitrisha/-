#include <stdio.h>
#include <locale.h>
#include < stdlib.h >

int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 0, d = 0;
    float p = 3.14;
    printf("������� ������� ��������������:");
    scanf("%d", &a);
    scanf("%d", &b);
    int S = a * b;
    int P = 2 * (a + b);
    printf("�������: %d\n", S);
    printf("��������: %d\n", P);
    printf("������� ������� ����������:");
    scanf("%d", &d);
    float L = p * d;
    printf("������ ����������: %f\n", L);
    printf("������� ��� �����:");
    scanf("%d", &a);
    scanf("%d", &b);
    int Sr = (a + b) / 2;
    printf("������� a������������� = %d\n", Sr); 
    printf("������� ��� ��������� �����:");
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = a * a + b * b;
    int raz = a * a - b * b;
    int proizv = a * a * b * b;
    int chast = (a * a) / (b * b);
    printf("����� �� ���������: %d\n", sum);
    printf("�������� �� ���������: %d\n", raz);
    printf("������������ �� ���������: %d\n", proizv);
    printf("������� �� ���������: %d\n", chast);
    printf("������� ��� ��������� �����:");
    scanf("%d", &a);
    scanf("%d", &b);
    int su = abs(a) + abs(b);
    int ra = abs(a) - abs(b);
    int proiz = abs(a) * abs(b);
    int chas = abs(a) / abs(b);
    printf("����� �� �������: %d\n", su);
    printf("�������� �� �������: %d\n", ra);
    printf("������������ �� �������: %d\n", proiz);
    printf("������� �� �������: %d\n", chas);
    return 0;
}

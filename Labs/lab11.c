#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int Q = 0, i = 0;
    while (i < 6){
        printf("Введите номер задания:");
        scanf("%d",&Q);
        i++;
        if(Q == 1){
            int A = 0, B = 0;
            printf("\nВведите A,B:");
            scanf("%d %d",&A,&B);
            if (A!=B){
                if(A>B){B = A;}
                else{A = B;}
            }
            else{
                A = 0;
                B = 0;
            }
            printf("\nA = %d\n", A);
            printf("B = %d\n", B);
            printf("/////////////////////////////////////////////////////////////////\n");
        } 
        if(Q == 2){
            int A = 0, B = 0,C = 0, s = 0;
            printf("\nВведите A,B,C:");
            scanf("%d %d %d",&A,&B,&C);
            if(A>C && B>C){s = A+B;}
            if(A>B && C>B){s = A+C;}
            if(B>A && C>A){s = B+C;}
            printf("\nСумма больших чисел равна =%d\n", s);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 3){
            int A = 0, B = 0,C = 0, s = 0;
            printf("\nВведите A,B,C:");
            scanf("%d %d %d",&A,&B,&C);
            int s1 = B - A;
            int s2 = C - A;
            s1 = abs(s1);
            s2 = abs(s2);
            if(s2>s1){
                printf("Ближе находится точка B. Растояние равно = %d\n",s1);    
            }
            else{printf("Ближе находится точка C. Растояние равно = %d\n",s2);}
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 4){
            int x=0,y=0;
            printf("\nВведите кординаты точки:");
            scanf("%d %d", &x,&y);
            if(x>0){
                if(y>0){printf("Это 1 четверть\n");}
                if(y<0){printf("Это 4 четверть\n");}
            }
            if(x<0){
                if(y>0){printf("Это 2 четверть\n");}
                if(y<0){printf("Это 3 четверть\n");}
            }
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 5){
            int A =0;
            printf("\nВведите целое число:");
            scanf("%d",&A);
            if(A<0){
                if(A%2==0){
                    printf("отрицательное чётное число\n");
                }
                else{printf("отрицательное нечётное число\n");}
            }
            if(A>0){
                if(A%2==0){
                    printf("положительное чётное число\n");
                }
                else{printf("положительное нечётное число\n");}
            }
            if(A==0){
                    printf("нулевое число\n");
            }
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 6){
            int A =0;
            printf("\nВведите целое число от 1  до 999:");
            scanf("%d",&A);
            if(A<100){
                if(A%2==0){
                    printf("двухзначное чётное число\n");
                }
                else{printf("двухзначное нечётное число\n");}
            }
            if(A>=100){
                if(A%2==0){
                    printf("трёхзначное чётное число\n");
                }
                else{printf("трёхзначное нечётное число\n");}
            }
            if(A==0){
                    printf("нулевое число\n");
            }
            printf("/////////////////////////////////////////////////////////////////\n");
        }
    }
    return 0;
}

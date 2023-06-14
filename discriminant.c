#include<stdio.h>
#include<locale.h>
#include<math.h>
int main()
{int a,b,c;
float d,x1,x2;
setlocale(LC_ALL,"RUS");
printf("Добро пожаловать в программу нахождения корней квадратного уравнения\n");
A1:printf("Введите a: ");
scanf("%d",&a);
if(a==0){printf("Введено некорректное значение\n");goto A1;}
A2:printf("Введите b: ");
scanf("%d",&b);
if(a==0){printf("Введено некорректное значение\n");goto A2;}
A3:printf("Введите c: ");
scanf("%d",&c);
if(a==0){printf("Введено некорректное значение\n");goto A3;}

printf("Дано: ");
if(a==1){printf("x^2");}else
if(a==-1){printf("-x^2");}else
{printf("%dx^2",a);}
if(b==1){printf("+x");}else
if(b==-1){printf("-x");}else
if(b>0){printf("+%dx",b);}else
if(b<0){printf("%dx",b);}
if(c>0){printf("+%d",c);}else
if(c<0){printf("%d",c);}
printf("=0\n\n");

printf("Решение:\n\n");

d=b*b-4*a*c;
printf("D=b^2-4ac=%d^2-4*%d*%d=%f\n",b,a,c,d);
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);

if(d==0)
{printf("x=-b/2a=");
if(b>0)printf("-%d/",b);
if(b<0)printf("-(%d)/",b);
if(a>0)printf("2*%d",a);
if(a<0)printf("2*(%d)",a);
printf("=%f\n",x1);
printf("\nОтвет:\n");
printf("x=%f\n",x1);
}
if(d>0)
{printf("x1=(-b+sqrt(D))/2a=");
if(b>0)printf("(-%d+sqrt(%f))/",b,d);
if(b<0)printf("(-(%d)+sqrt(%f)/)",b,d);
if(a>0)printf("2*%d",a);
if(a<0)printf("2*(%d)",a);
if(b>0)printf("(-%d+%f)/",b,sqrt(d));
if(b<0)printf("(-(%d)+%f/)",b,sqrt(d));
if(a>0)printf("2*%d",a);
if(a<0)printf("2*(%d)",a);
printf("=%f\n",x1);

printf("x2=(-b+sqrt(D))/2a=");
if(b>0)printf("(-%d-sqrt(%f))/",b,d);
if(b<0)printf("(-(%d)-sqrt(%f)/)",b,d);
if(a>0)printf("2*%d",a);
if(a<0)printf("2*(%d)",a);
if(b>0)printf("(-%d-%f)/",b,sqrt(d));
if(b<0)printf("(-(%d)-%f/)",b,sqrt(d));
if(a>0)printf("2*%d",a);
if(a<0)printf("2*(%d)",a);
printf("=%f\n",x2);
printf("\nОтвет:\n");
printf("x1=%f\n",x1);
printf("x2=%f\n",x2);
}
if(d<0)printf("\nУравнение не имеет решений\n");

printf("\nПрограмма написана учеником первого курса - Досмагамбетова Адель.\nКазахско-Немецкий Университет, 2019 год\n\n");
}

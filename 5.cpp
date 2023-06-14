#include<stdio.h>
#define N 20
int main() 
{
int i; // 
float a, b, x, y;
int k=0;
float H; // шаг изменения аргумента функции
int  M,indMax=0;
float XX[N+1], YY[N+1],ZZ[N+1];
float Sum=0;
float sred,maxY;
a=-5;  // левая граница
b=5;  // правая граница
H=(b-a)/N; 
M= N+1; //  кол-во точек
printf("     X       Y \n");
printf("----------------- \n");	
x=a; // 1-я точка
XX[0]=a;  // 1-я точка  с индексом 0
for (i=0;i<=N ; i=i+1) {
	y=2*x*x -3*x +7;
	YY[i]=y;
	printf(" %d %6.1f  %7.1f\n",i+1, XX[i],YY[i]);
	x=x+H; //  переходим к следующей точке
	XX[i+1]=XX[i]+H;
}
printf(" \n  H= %5.1f\n", H );	
for (i=0;i<=N ; i=i+1) {
	Sum= Sum + YY[i];
}
sred=Sum/(N+1);
printf("\n\nNEW ARRAY:");
for(i=0;i<=N;i++){
	if(YY[i]>=sred){
		ZZ[i]=YY[i];
		k++;
	}
	else{
		ZZ[i]=0;
	}
	printf("\n%5.2f",ZZ[i]);
}
printf("\nKolichestvo elementov bolshe srednego %d ",k);
printf(" \n   srednee=%7.1f", sred);
return 0;
}

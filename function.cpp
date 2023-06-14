#include <stdio.h>
#include <conio.h>
int max3(int x, int y, int z);
int SumDigits ( int N );

void myPrint();	
int main () {
int numb1;
int numb2;
int numb3;
int x;
int maxPrn;
int N, s;

printf ( "\n enter a number ");
scanf ( "%d", &N );
s = SumDigits (N); // вызов функции
printf ( "the sum of the number %d is equals to %d\n", N, s );


maxPrn=max3(3, 5, -2);
printf ("\n Maximum=: %d\n", maxPrn);
printf ("%s", "\nEnter three integers:");
scanf ("%d%d%d", &numb1, &numb2, &numb3);
printf ("\n Maximum is: %d\n", max3(numb1,numb2,numb3));
myPrint();
return 0;
}
int max3(int x,int y,int z)
{
int max;
max=x;
if (y>max) {
	max=y;
}
if (z>max) {
	max=z;
}
return max;
}
int SumDigits ( int N ) // заголовок функции
{ // начало функции
int d, sum = 0;
while ( N != 0 )
 {
 d = N % 10; // тело функции
 sum = sum + d;
 N = N / 10;
 }
return sum; // функция возвращает значение sum
} // конец функции
void myPrint() {
printf ("\nAdel Dosmaganbetova!!!");
printf ("\nTEST VOID");		
}

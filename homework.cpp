#include <stdio.h>
#include <conio.h>
int max3(int x, int y, int z);
int min3(int x, int y, int z);
void myPrint();	
int main () {
int numb1;
int numb2;
int numb3;
int x;
int maxPrn;
int minPrn;
int Sum (int A[], int N)
int i, sum;
(

sum=0;
for (i=0; i<N; i++)
sum+=A[i];
return sum;
)
maxPrn=max3(3, 5, -2);
printf ("\n Maximum=: %d\n", maxPrn);
printf ("%s", "\nEnter three integers:");
scanf ("%d%d%d", &numb1, &numb2, &numb3);
printf ("\n Maximum is: %d\n", max3(numb1,numb2,numb3));
maxPrn= max3(10, 5, 7);
printf ("\n Maximum=: %d\n", maxPrn);

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

void myPrint() {
printf ("\nAdel Dosmaganbetova!!!");
printf ("\nTEST VOID");		
}

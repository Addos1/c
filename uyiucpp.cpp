#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () {//1
int n;// the amount of summing integers
int a[n];// the numbers
int i, sum=0;
printf ("write the amount of summing integers:");
scanf("%d", &n);

printf ("write the integers:");
for (i=0; i<n; i++) {
scanf("%d", &a[n]);
}
for (i=0; i<n; i++) {
	sum=sum+a[n];
	n=n-1;
}
printf("%d", sum);

return 0;
}//1

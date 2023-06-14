#include<stdio.h>
#include<stdlib.h>
int main () {//1
int a;// the first integer of the sequence
int b; // the last integer of the sequence
int sum;
printf ("write the first integer of the sequence:");
scanf("%d", &a);
printf ("write the second integer of the sequence:");
scanf("%d", &b);
while (a<=b) {//3
printf ("%d\n", a);//for the increasing sequence
sum=sum+a;
a=a+1;
}//3
printf("the sum is %d", sum);
return 0;
}//1


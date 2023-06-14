#include<stdio.h>
#include<stdlib.h>
int main () {//1
int a;// the first integer of the sequence
int b; // the last integer of the sequence
int c; //the difference between two numbers
printf ("write the first integer of the sequence:");
scanf("%d", &a);
printf ("write the second integer of the sequence:");
scanf("%d", &b);
printf ("write the difference between two numbers:");
scanf("%d", &c);
if (a<b) {//2
while (a<=b) {//3
printf ("%d\n", a);
a=a+c;
}//3
}//2
else {//4
while (a>=b) {//5
printf ("%d\n", a);
a=a+c;
}//5	
}//4
return 0;
}//1
    

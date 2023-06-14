#include <stdio.h>
int main(){//1
int n;//the amount of numbers
int i;//the counter
int  max;
float min;
float avr, sum;
int a[n];//the array
float b[n];
printf("Enter the amount of numbers:\n");
scanf("%d",&n);
printf("Enter numbers:\n");

for(i=0;i<n;i++){//2
scanf("%d",&a[i]);
}//2

min=a[0];
for (i=0;i<n;i++){//3 finding the miminum
if(a[i]<min){//4
min=a[i];
}//4

}//3
max=a[0];
for (i=0;i<n;i++){//5 finding the  maximum
if(a[i]>max){//6
max=a[i];
}//6
}//5

for(i=0;i<n;i++){//7 finding the sum and average
sum=sum+a[i];
avr=sum/n;
}//7

printf("\nYour array");
for(i=0;i<n;i++){//8 your array
printf(" %d", a[i]);
}//8

printf("New array");
for(i=0;i<n;i++){//9 new array
b[i] = (min/3)*a[i];
printf(" %f", b[i]);
}//9

printf("\nThe sum is %f \n", sum);
printf("The average is %f \n", avr);
printf("The minimum number is %d \n",min);
printf("The maximum number is %d \n",max);


return 0;
}//1

#include <stdio.h>
int main(){//1
int i;
int mul;
int a;// the first integer of the sequence
int b; // the last integer of the sequence
printf("Enter the first integer of the sequence:");
scanf("%d",&a);
printf("Enter last integer of the sequence:");
scanf("%d",&b);
for(i=a;i<=b;i++){//2
if(i%2!=0){//3
mul=mul*i;
}//3
}//2
printf("Multiplication of odd numbers: %d ",mul);
return 0;
}//1



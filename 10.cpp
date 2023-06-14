#include <conio.h>
#include <stdio.h>
int main()
{//1
int n=5;
int i;
int k;
int a[n];//your array
printf("Enter numbers:");
for(i=0;i<n;i++){//2
scanf("%d",&a[i]);	
}//2
printf("your symbols\n");
for(i=0;i<n;i++){//3
printf(" %d ",a[i]);
for (k=0;k<a[i];k++){//4
printf(" * ");
}//4
printf("\n");
}//3
getch ();
}//1


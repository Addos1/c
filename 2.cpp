#include <stdio.h>
#include <math.h>
int main()
{//1
int n;// the number of dimensions
int i;
int X[n];
int l;// the length vector
printf("Enter the number of dimensions:\n");
scanf("%d",&n);
printf("Enter coordinates of x:\n");
for(i=0;i<n;i++){//2
scanf("%d",&X[i]);
}//2
for(i=0;i<n;i++){//4
l=sqrt(l+X[i]*X[i]);
}//4
printf("the length vector is %d", l);
return 0;
}//1

#include<stdio.h>
int main ()
{
	int i, j;
	int n=2;
	int m=3;
	int z;
	int b=3;
	int max, min, suml;
	int x[2][3]={{3,2,1},{7,5,-6}};
	int y[2];
	int u[3];
	printf("your array\n");
	for (i=0; i<n; i++) {
		for(j=0; j<m; j++){
		printf("%d  ", x[i][j]);
	}
	printf("\n");
}
max=x[0][0];
	for (i=0; i<n; i++) {
		for(j=0; j<m; j++){
		if (x[i][j]>max){
			max=x[i][j];
		}
	}	
}
min=x[0][0];
	for (i=0; i<n; i++) {
		for(j=0; j<m; j++){
		if (x[i][j]<min){
			min=x[i][j];
		}
	}	
}
for(i=0; i<n; i++)
{
y[i]=0;
  for(j=0; j<m; j++){
		y[i]=y[i]+x[i][j];
}
}
for(i=0; i<n; i++)
{
    printf("\n the sum of stroki1 is %d \n", y[i]);
}
for(j=0; j<m; j++)
{
u[j]=0;
  for(i=0; i<n; i++){
		u[j]=u[j]+x[i][j];
}
}
for(j=0; j<m; j++)
{
    printf("\n the sum of stolbci is %d \n", u[j]);
}
printf("the maximum is %d \n", max);
printf("the minimum is %d", min);
return 0;
}

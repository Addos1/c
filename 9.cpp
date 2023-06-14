//Построение Гистограмм для 5 чисел в интервале с 1 до 30
#include <stdio.h>
int main(void){
	int n=5;
	int i;
	int j;
	int a[n];
	printf("\nArray: \n");
	for(i=0;i<n;i++){
		printf("\n %d ",a[i]);
	for (j=0;j<a[i];j++){
		printf(" * ");
	}
	}
	printf("\n\n~DONE BY KAMIYA~");
	return 0;
}

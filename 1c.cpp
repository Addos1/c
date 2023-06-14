//вывод последовательности чисел
#include <stdio.h>
int main(void){
	int n=6;
	int i;
	int k=20;
	printf("\nThe sequence looks like:");
	while(i<n){
		printf(" %d ",k);
		k=k-6;
		i++;
	}
	printf("\n\n~DONE BY KAMIYA~");
return 0;
}

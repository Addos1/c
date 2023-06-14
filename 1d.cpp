//вывод последовательности чисел
#include <stdio.h>
int main(void){
	int n=5;
	int i;
	int k=19;
	printf("\nThe sequence looks like:");
	for(i=0;i<n;i++){
		printf(" %d ",k);
		k=k+8;
	}
	printf("\n\n~DONE BY KAMIYA~");
return 0;
}

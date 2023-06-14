#include <stdio.h>              
int main()                       
{
	int a[100],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: ");
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)                     // ascending ordering
	{
		for (int j = 0; j < n; j++)             // comparing other values
		{
			if (a[j] > a[i])               
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            
				a[j] = tmp;             
			}  
		}
	}
	printf("\n\nAscending : ");                     
	for (int i = 0; i < n; i++)                     // sorted array 
	{
		printf(" %d ", a[i]);
	}
}

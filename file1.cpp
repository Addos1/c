#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
// ������ � ����� ������ �� ������ �� ����� ����������������� �������
int   account;
	char   nameU[30];
	float   bal;
	FILE  *cfPtr;
if((cfPtr=fopen("C:\\Users\\����� ��������������\\Desktop\\��\\thanks.txt", "r"))  == NULL)
		 printf("File could not be opened\n");
else {
	printf("Reading and printing data from file\n\n");
	printf("Account      Name    Bal\n " );
	fscanf(cfPtr, "%d%s%f", &account, nameU, &bal);
        
   while(!feof(cfPtr)) 
        { 
		fread(bal, sizeof bal, 1, cfPtr);
		
	}
   printf("continue...\n");
   while(  !feof(stdin))
         {
		fwrite(bal, sizeof bal, 1, cfPtr);
		printf("?");
		scanf("%d%s%f", &account, nameU, &bal);
           }
       fclose(cfPtr);
         } 
  return 0;
}



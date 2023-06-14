#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL,"RUS");
	FILE*fp;
	float Bal1[3]={80.0,90.0,89.0};
	float Bal2[3]={75.0,55.0,91.0};
	float Bal3[3]={81.0,69.0,73.0};
	int i;
	
	if((fp=fopen("C:\\Users\\Адель Досмаганбетова\\Desktop\\дз\\file3.txt","rb"))=NULL)
	{
		printf("Невозможно открыть файл\n");
		exit(1);
	}
	if(fread(Bal1,sizeof(float),3,fp)!=3)
	{
		if(feof(fp)) printf("Premature end of file.\n");
        else printf("File read error.\n");
	} 
	fclose(fp);
	for(i=0;i<3;i++)
	{
		printf("%2.1f ",Bal1[i]);
	} 
	if(fread(Bal2,sizeof(float),3,fp)!=3)
	{
		if(feof(fp)) printf("Premature end of file.\n");
        else printf("\nFile read error.\n");
	} 
	fclose(fp);
		for(i=0;i<3;i++)
	{
		printf("%2.1f ",Bal2[i]);
	}  
	return 0;
}

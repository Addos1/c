#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int ball;
} student;
int main()
{
    int n, i, chars;
    FILE *fp;
    fp = fopen("C:\\Users\\Адель Досмаганбетова\\Desktop\\дз\\file3.txt", "rb");
  if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d \n", i + 1);
        fflush(stdin);
        printf("Name: ");
        gets(student.name); 
		printf("Ball: ");
         for(i = 0; i < 3; i++)
    {
       
        scanf("%d", &student.ball);
    }
}
           while( fread(&student, sizeof(student), 1, fp) == 1 )
    {
        printf("Name: %s \n", student.name);   
        printf("Ball: %d \n", student.ball);
    }
    fclose(fp);
    return 0;
}

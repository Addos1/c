#include<stdio.h>
#include<math.h>
#include<locale.h>
int main () {
setlocale(LC_ALL, "Russian");
float d1, d2, H, x, y;
printf("������� �������� �������:\n");
printf("������� ����� �������:\n");
scanf("%f", &d1);
printf("������� ������ �������:\n");
scanf("%f", &d2);
printf("������� ��� ��������� �������:\n");
scanf("%f", &H);

	x=d1;
while (x<=d2)	{
	
	y=2*x*x-3*x+7;
	printf("| %5.1f  | %5.1f |\n", x, y);
	x=x+H;
	
}	
return 0;
}

#include <stdio.h>
#include <math.h>
int main () {
	int x1, x2, y1, y2; //white figure
	int x3, x4, y3, y4; //black figure
	printf ("coordinates of the white figure. Enter x1, x2, y1, y2:");
	scanf (" %d %d %d %d", &x1, &x2, &y1, &y2);
	
	printf ("coordinates of the  black figure. Enter 4 numbers:");
	scanf (" %d %d %d %d", &x3, &x4, &y3, &y4);


0<=x1<=x2<=1000000;
0<=y1<=y2<=1000000;
0<=x3<=x4<=1000000;
0<=y3<=y4<=1000000;

 if (x1>=x3 && x2<=x4 && x1>=x3 && x2<=x4) {
 	printf("Yes");
 	
 	
 }
 else {
 	printf("no");
 }

#include <stdio.h>
#include <math.h>
int main () {
	int x1, x2, y1, y2; //white figure
	int x3, x4, y3, y4; //first black figure
	int x5, x6, y5, y6; //second black figure
	
	printf ("coordinates of the white figure. Enter x1, x2, y1, y2:");
	scanf (" %d %d %d %d", &x1, &x2, &y1, &y2);
	printf ("coordinates of the first black figure. Enter x3, x4, y3, y4:");
	scanf (" %d %d %d %d", &x3, &x4, &y3, &y4);
	printf ("coordinates of the second black figure. Enter x5, x6, y5, y6:");
	scanf (" %d %d %d %d", &x5, &x6, &y5, &y6);

    0<=x1<=x2<=1000000;
    0<=y1<=y2<=1000000;
    0<=x3<=x4<=1000000;
    0<=y3<=y4<=1000000;
    0<=x5<=x6<=1000000;
    0<=y5<=y6<=1000000;

    if (x1>=x3 && x2<=x4 && y1>=y3 && y2<=y4) {
   	printf("Yes");
    }
    else {
    if (x1>=x5 && x2<=x6 && y1>=y5 && y2<=y6) {
   	printf("Yes");
    } 
    else {
	if (x1>=x3 && x2>=x4 && y1>=y3 && y2<=y4 &&   x4<=x5 && x2<=x6 && y1>=y5 && y2<=y6) {
   	printf("Yes");
	 }   
	else {
	if (x1>=x3 && x2>=x4 && y1>=y3 && y2<=y4 &&   x4>=x5 && x2<=x6 && y1>=y5 && y2<=y6) {
   	printf("Yes");
	}
	else {
	if (x1>=x3 && x2<=x4 && y1>=y3 && y2>=y4 &&   x1>=x5 && x2<=x6 && y4<=y5 && y2<=y6) {
   	printf("Yes");	
	} 	
	else {
	if (x1>=x3 && x2<=x4 && y2>=y3 && y1<=y5 &&   x1>=x5 && x2<=x6 && y4>=y5 && y2<=y6) {
   	printf("Yes");	
	} 	
	else {
	printf("No");
    }  
    }
    }
    }
    }
    }
return 0;
} 

#include <stdio.h>
#include <ctype.h>
#define SIZE 128
void display(int numread);
char buf[SIZE];
void display();
int main(int argc, char *argv[])
{
FILE *fp;
int sector, numread;
if(argc!=2) {
printf("Usage: dump filename");
return 1;
}
if((fp=fopen(argv[1], "rb"))==NULL) {
printf("Cannot open file.");
return 1;
}
do {
printf("Enter sector: ");
scanf("%d", &sector);
if(sector >= 0) {
if(fseek(fp, sector*SIZE, SEEK_SET)) {
printf("seek error");
}
if((numread=fread(buf, 1, SIZE, fp)) != SIZE)
printf("EOF reached.");
display(numread);
}
} while(sector>=0);
return 0;
}

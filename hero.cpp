#include <stdio.h>
int main () {

int in;// inteligence
int pw;//power
int exp;
int q;
int k=0;
scanf ("%d", &q);
for (int i=0; i<q; i++) {

scanf ("%d %d %d", &pw, &in, &exp);
if(pw<in) {
	pw=pw+exp;
	if(pw<in) {
		k=0;
	}
}

if(pw<in) {
	pw=pw+exp;
	while(pw>in) {
		pw=pw+exp-1;
		in=in+1;
		k=k+1;
	}
	if(pw>in) {
	
	while(pw>in) {
		pw=pw+exp-1;
		in=in+1;
		k=k+1;
	}
}
printf ("%d", k);
}
}
}

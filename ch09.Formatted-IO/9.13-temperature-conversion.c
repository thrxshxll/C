#include <stdio.h>

int main(void){
	double xf, xc;

	scanf("%lf", &xf);

	xc=5.0/9.0*(xf-32);

	printf("%10lf %+10lf", xf, xc);


	return 0x00;
}
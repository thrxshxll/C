#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

 int main(void)
 {

 	int n = 2, r;

 	r = pow(n, 3);

 	printf("r^³ = %d", r);

 	//printf("%10.2f\n", pow(2.5, 2));

 	return 0;
 }

 //lembra de passar a opção -lm para o gcc!
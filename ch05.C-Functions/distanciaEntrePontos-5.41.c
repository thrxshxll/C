/*distanciaEntrePontos-5.41*/
#include <stdio.h>
#include <math.h>

double distance(float x1, float y1, float x2, float y2);

int main(void)
{
	int x1, y1;
	int x2, y2;

	printf("Inform the first point.\n(x1): ");
		scanf("%d", &x1);
	
	printf("(y1): ");
		scanf("%d", &y1);

	printf("\nInform the second piont.\n(x2): ");
		scanf("%d", &x2);

	printf("(y2): ");
		scanf("%d", &y2);

	printf("\nThe distance both the points is %f\n", distance(x1, y1, x2, y2));
}


double distance(float x1, float y1, float x2, float y2)
{
	return sqrt( (pow((x2 - x1), 2) + pow((y2 - y1), 2)) );
}	
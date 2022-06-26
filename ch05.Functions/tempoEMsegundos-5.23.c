/*tempoEMsegundos-5.23*/
#include <stdio.h>

int tempoSegundo(void);

int main(void)
{
	tempoSegundo();
}


int tempoSegundo(void)		//calcula a quantidades de segundos entre determinadas horas
{
	int hour;
	int minute;
	int second;

	int nowh;
	int conth;
	int tsecond=0;
	int h1, h2;

	//printf("type what time is it: ");
		//scanf("%d", &nowh);

		printf("de (x)horas até (y)horas: ");
			scanf("%d%d", &h1, &h2);

		conth = h2;

	for(hour=12; conth>h1; conth--)  		//  loop da hora maior até a hora menor
	{
		for(minute=0; minute<=59; minute++)			//3600
		{
			for(second=0; second<=59; second++)		//60s
			{
				tsecond++;
			}
		}
	}

	printf("\nde %dh à %dh passaram-se %d segundos\n", h1, h2, tsecond);
	
}
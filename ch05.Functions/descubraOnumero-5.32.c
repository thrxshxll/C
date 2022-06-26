/*descubraOnumero-5.32*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int discover(void);

int main(void)
{
	char answer;
	int number;
	int try;

	srand(time(NULL));	//randomiza a RAND()

		try = discover();

	printf("try = %d\n", try);
	printf("I have a number between 1 to 1000.\n");
	printf("Can you discover what is?\n");
	printf("Type your first try: ");
			scanf("%d", &number);


	while(try != number && answer != 'n')
	{
	
		if(number > try)
			printf("\nVery tall. Try again.\n");
						
		if(number < try)
			printf("\nVery low. Try again.\n");
		

		printf("Type other try: ");
			scanf("%d", &number);


		if(number==try)
		{
			printf("\nGreat! You discovered the number!\n");
			printf("\nWould like to play again? (s - n): ");
				scanf("%c", &answer);
		}

	}

}


int discover(void)
{
	return 1 + rand()	%	1000;
}
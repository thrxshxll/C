/*6.20_jogo_de_craps*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rolldice(void);


int main(void)
{
	enum Status gameStatus;
	int sum;
	int mypoint;
	int cont_won=0, cont_lost=0;
	int i;


	srand(time(NULL));

	for(i=1; i<=100; i++){


		switch((sum = rolldice())){

			case 7:
			case 11:
				gameStatus = WON;
				break;

			case 2:
			case 3:
			case 12:
				gameStatus = LOST;
				break;

			case 4:
			case 5:
			case 6:
			case 8:
			case 9:
			case 10:
				gameStatus = CONTINUE;
				mypoint = sum;
				printf("my point: %d\n", mypoint);
				break;
		}


		while(gameStatus==CONTINUE){
			sum = rolldice();

			if(sum==mypoint){
				gameStatus = WON;
			
			}else if(sum==7){
				gameStatus = LOST;
			}
		}


		if(gameStatus==WON){
			printf("player won\n");

			/*aqui irá contar a quatidade de jogadas
				ganhas. A condição define até a N-nésima
				jogada você quer saber
			*/
			//if(i<=20)
				++cont_won;

		}else{
			printf("player lost\n");

			//if(i<=20)
				++cont_lost;
			
		}
	}/* END for(i)*/
		printf("\nresultados de %d jogadas:\n", i-1);
		printf("wons: %d\n", cont_won);
		printf("lost: %d\n", cont_lost);

		printf("chances de ganhar: %.2f\n", (float)cont_won/(i-1));

}/* END main() */


int rolldice(void)
{
	int dice1, dice2, s;

	dice1 = 1+rand()%6;
	dice2 = 1+rand()%6;
	s = dice1+dice2;

	printf("player threw: %d + %d = %d\n", dice1, dice2, s);

	return s;
}
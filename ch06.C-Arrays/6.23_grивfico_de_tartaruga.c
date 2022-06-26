/*gráfico_de_tartarugac*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 27 //tamanho da matriz do game

void steps_horizontal(float graf[][SIZE], int mov_hor, int quant_mov);
void steps_vertical(float graf[][SIZE], int mov_ver, int quant_mov);
void print_game(float game[][SIZE]);
void borda_game(float bgame_graf[][27]);



int position_h= SIZE/2;	//variável global de possição
int position_v= SIZE/2; //variável global de possição

int main(void)
{
	float GUI[SIZE][SIZE] = {0}; //matriz do game

	GUI[SIZE/2][SIZE/2] = 2; //ponto central


	//int estado_caneta;		//cima ou baixo
	int mov_horizontal;		//qual direção horizontal deve tomar
	int mov_vertical;   	//qual direção vertical deve tomar
	int quant_movimento;	//quantidade de movimento
	
	int ans_to;						//horizontal ou vertical?
	int print_our_end;		//printar ou finalizar game

	borda_game(GUI);

	print_game(GUI);

	do{

		printf("\n1-horizontal  |  2-vertical\n%14s", ":");
			scanf("%d", &ans_to);


			switch(ans_to){

				case 1:
					printf("\n1-direita  |  2-esquerda\n%11s", ":");
						scanf("%d", &mov_horizontal);

					printf("\nMover N passos\n      N: ");
						scanf("%d", &quant_movimento);

					steps_horizontal(GUI, mov_horizontal, quant_movimento);
					break;

				case 2:
					printf("\n1-cima  |  2-baixo\n%8s", ":");
						scanf("%d", &mov_vertical);

					
					printf("\nMover N passos\n      N: ");
							scanf("%d", &quant_movimento);

					steps_vertical(GUI, mov_vertical, quant_movimento);
					break;
			}


		printf("6-Imprimir  |  9-Finalizar\n%12s", ":");
			scanf("%d", &print_our_end);

			print_game(GUI);
		
	}while(print_our_end!=9);

	return 0;
}


void steps_horizontal(float graf[][SIZE], int mov_hor, int quant_mov)
{
	int j;	// [][j] coluna


	switch(mov_hor){

		//to turn right
		case 1:
			for(j=position_h+1; j<= position_h +quant_mov; j++){

				graf[position_v][j] = 2; //marca a trajetória horizontal feita
			}
			position_h=j-1;
			break;

		//to turn left
		case 2:
			for(j=position_h-1; j>= position_h -quant_mov; j--){
				
				graf[position_v][j] = 2; //marca a trajetória horizontal feita
			}
			position_h=j+1;
			break;
	}
}


void steps_vertical(float graf[][SIZE], int mov_ver, int quant_mov)
{
	int i;	//[i][] linha


	switch(mov_ver){

		//to down
		case 1:
			for(i=position_v-1; i>= position_v -quant_mov; i--){
			
				graf[i][position_h] = 2; //marca a trajetória vertical feita
			}
			position_v=i+1;
			break;

		//to up
		case 2:
			for(i=position_v+1; i<= position_v +quant_mov; i++){

				graf[i][position_h] = 2; //marca a trajetória vertical feita
			}
			position_v=i-1;
			break;
	}
}


void print_game(float graf[][SIZE])
{
	// graf[][] = 0 "  "
	// graf[][] = 1 "0 "
	// graf[][] = 2 "* "

	int i, j;

	system("clear");

	/*print*/
	for(i=0; i<SIZE; i++){	// [i][]

		for(j=0; j<SIZE; j++){	// [][j]

			if(graf[i][j]==0){
				printf("  ");
			}
			if(graf[i][j]==1){
				printf("0 ");
			}
			if(graf[i][j]==2){
				printf("* ");
			}
		}
		printf("\n");
	}
}


void borda_game(float bgame_graf[][27])
{
	int x;

	for(x=0; x<SIZE; x++){

		bgame_graf[0][x] = 1; 			// 1º linha
		bgame_graf[x][0] = 1; 			// 1º coluna
		bgame_graf[SIZE-1][x] = 1; //ultima linha
		bgame_graf[x][SIZE-1] = 1; //ultima coluna
	}
}
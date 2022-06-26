/*6.24_B_passeio_do_cavalo*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int cont=1;

void imprimir(int tab[][SIZE]);
int move(int tab[][SIZE], int ps[]);

int main(void){

	int pos[2];
	int tabuleiro[SIZE][SIZE]={0};

	imprimir(tabuleiro);
	printf("POSIÇÃO INICIAL\n");
	printf(" linha [0-7] : ");
		scanf("%d", &pos[0]);
	printf("coluna [0-7] : ");
		scanf("%d", &pos[1]);
	tabuleiro[pos[0]][pos[1]]=cont;
	system("clear");
	imprimir(tabuleiro);

	while(cont<64){

		switch(move(tabuleiro, pos))
		{
	 	case 1:
	 		system("clear");
			imprimir(tabuleiro);
			break;
	 	
	 	case 2:
	 		printf("peça já ocupou essa posição\n");
	 		break;

	 	case 3:
	 		printf("sairia do tabuleiro\n");
	 		break;
	 	}
	}

	return 0;
}


int move(int tab[][SIZE], int ps[]){

	int   vertical[8]={-1,-2,-2,-1,1,2,2,1};		// LINHA
	int horizontal[8]={2,1,-1,-2,-2,-1,1,2};		// COLUNA
	int moveNumber;
	int pos0=ps[0], pos1=ps[1]; //variáveis de teste(verificam se sai do tabuleiro e se
									            // já esteve na posição)
	printf("Move: ");
		scanf("%d", &moveNumber);

	pos0+=vertical[moveNumber];
	pos1+=horizontal[moveNumber];


	if((0<=pos0 && pos0<8) && (0<=pos1 && pos1<8)){		//verifica se a peça sairá do tabuleiro

		if(tab[pos0][pos1]==0){  //verifica se a posição já foi ocupada

			ps[0]+=vertical[moveNumber];
			ps[1]+=horizontal[moveNumber];
			tab[ps[0]][ps[1]]=++cont;
			return 1;
		}else
			return 2; //printf("peça já ocupou essa posição")
	}else
		return 3; //	printf("sairia do tabuleiro\n");
}


void imprimir(int tab[][SIZE]){

	int x, y;

	printf("\n");

	for(x=0; x<SIZE; x++){

		for(y=0; y<SIZE; y++){

			if(tab[x][y]==cont){
				printf("%3s%1d", "'", tab[x][y]);
			
			}else
				printf("%4d", tab[x][y]);
		}
		printf("\n\n");
	}
}
/*6.24_C_passeio_do_cavalo*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8
int cont=101;

void imprimir(int tab[][SIZE]);
int move(int tab[][SIZE], int pos[]);

int main(void){

	int c;
	int pos[2];
	int ver[8]={-1,-2,-2,-1,1,2,2,1};		// LINHA
	int hor[8]={2,1,-1,-2,-2,-1,1,2};		// COLUNA
	int access[SIZE][SIZE]={
2,3,4,4,4,4,3,2,
3,4,6,6,6,6,4,3,
4,6,8,8,8,8,6,4,
4,6,8,8,8,8,6,4,
4,6,8,8,8,8,6,4,
4,6,8,8,8,8,6,4,
3,4,6,6,6,6,4,3,
2,3,4,4,4,4,3,2};

srand(time(NULL));

	imprimir(access);

	printf("POSIÇÃO INICIAL\n");
	printf(" linha [0-7] : ");
		scanf("%d", &pos[0]);
	printf("coluna [0-7] : ");
		scanf("%d", &pos[1]);
	access[pos[0]][pos[1]]=cont;
	system("clear");
	imprimir(access);


	while(cont<164){
		
		switch( move(access, pos) ){

			case 1:
				system("clear");
				imprimir(access);
				break;

			case 2:
				// system("clear");
				// imprimir(access);
				printf("Posição já ocupada!\n");
				break;

			case 3:
				// system("clear");
				// imprimir(access);
				printf("Sairia do tabuleiro!\n");
				break;
			case 4:
				printf("TERMINETED!\n");
		}
	}

	return 0;
}


int move(int tab[][SIZE], int ps[]){
	
	static int test=0;

	int pos0=ps[0], pos1=ps[1]; //variáveis de teste(verificam se sai do tabuleiro e sejá esteve na posição)		            

	int   vertical[8]={-1,-2,-2,-1,1,2,2,1};		// LINHA
	int horizontal[8]={2,1,-1,-2,-2,-1,1,2};		// COLUNA
	int moveNumber, menorAccess=0;
	int x;
	printf("Move: ");
	scanf("%d", &moveNumber);
		
	/*if(test>7){
		cont=164;
		return 4;
		}else{

			for(x=0; x<8; x++){
				if((0<=pos0-vertical[x] && pos0-vertical[x]<8) && (0<=pos1-horizontal[x] && pos1-horizontal[x]<8)){
			
					if(tab[pos0-vertical[x] ][pos0-horizontal[x] ] < tab[pos1-vertical[menorAccess] ][pos1-horizontal[menorAccess] ])
						menorAccess = x;
				}
			}
			test++;
		}*/



	pos0+=vertical[moveNumber];
	pos1+=horizontal[moveNumber];


	if((0<=pos0 && pos0<8) && (0<=pos1 && pos1<8)){		//verifica se a peça sairá do tabuleiro

		if(tab[pos0][pos1]<101){  //se a posição ainda não foi ocupada

			ps[0]+=vertical[moveNumber];
			ps[1]+=horizontal[moveNumber];
			tab[ps[0]][ps[1]]=++cont;
			test=0;

			/* reduz uma unidade de cada posição da acessibilidade */
			for(x=0; x<8; x++){

				//Só irá reduzir uma unidade das posições que estiverem no tabuleiro
				if((0<=ps[0]+vertical[x] && ps[0]+vertical[x]<8) && (0<=ps[1]+horizontal[x] && ps[1]+horizontal[x]<8))					
					if(tab[ ps[0]+vertical[x] ][ ps[1]+horizontal[x] ] < 100) //apenas valores menores que 100
						tab[ ps[0]+vertical[x] ][ ps[1]+horizontal[x] ]--;			//reduz uma unidade daz posição que a peça pode ocupar de acordo com seu movimento
			}

				return 1; //executou normal
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

			if(tab[x][y]<100){
				printf("%4d", tab[x][y]);
						
			}else if(tab[x][y]>109){
				printf("%2s%2d", "'", tab[x][y]%100);
			
			}else
				printf("%3s%1d", "'", tab[x][y]%100);
		}
		printf("\n\n");
	}
}
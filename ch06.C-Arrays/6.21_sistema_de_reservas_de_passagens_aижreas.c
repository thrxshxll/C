/*6.21_sistema_de_reservas_de_passagens_aéreas*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

void selecionar_banco(int assento[], int class);
void bilhete(int n);
int estado_bancos(int assento[]);
int estado_classe(int classe_cheia);

int main(void)
{
	int bancos[SIZE]={0};		
	int exit=0;					//sair da aplicação
	int ver_bancos;
	int ans_banco;

	/* 	BEGINING PROCESS */
	while(bancos[5]!=1 || bancos[10]!=1){	

		ver_bancos = estado_bancos(bancos);
		
		ans_banco = estado_classe(ver_bancos);

		selecionar_banco(bancos, ans_banco);
	}
}/* END main() */


int estado_bancos(int assento[])	//mostra quais bancos já estão ocupados
{
	int cont;
	int a=0;	//verifica qual classe já está cheia


		printf("\n%s\n%s\n%s\n", "-----------------------------", "primeira classe", "---------------");
	for(cont=1; cont<=5; cont++){

		printf("[%d]: %2d\n", cont, assento[cont]);

		if(assento[5]==1)//se o último assento for 1, então a classe já está lotada
			a=1;
	}


		printf("\n%s\n%s\n%s\n", "-----------------------------","econômica", "---------");
	for(cont=6; cont<=10; cont++){
		printf("[%d]: %2d\n", cont, assento[cont]);

		if(assento[10]==1)//se o último assento for 1, então a classe já está lotada
			a=2;
	}

	return a;
}


int estado_classe(int classe_cheia){
	
	char accept;				//verifica se cliente aceita outra classe
	int ans_classe;			//escolha de classe

	switch(classe_cheia)
			{

				case 0:
					printf("%s\n%s\n:", "\n1 - primeira classe","2 - econômica");
						scanf("%d", &ans_classe);
					break;	

				case 1:	//cheia
					printf("\n%s\n%s\n", "1-CHEIA!","2-econômica");
					printf("%s\n:", "Pode ser a classe 2 ?");
						scanf(" %c", &accept);

						if(accept=='s'){
							ans_classe=2;
						}else
							ans_classe=0;
					break;

				case 2:	//cheia
					printf("\n%s\n%s\n", "1-primeira classe","2-CHEIA!");
					printf("%s\n:", "Pode ser a classe 1 ?");
						scanf(" %c", &accept);

						if(accept=='s'){
							ans_classe=1;
						}else
							ans_classe=0;
					break;	
			}// END switch(classe_cheia)

		return ans_classe;
	}
	

void selecionar_banco(int assento[], int class)
{
	int cont;
	int ver; // verifica se o banco está vazio

	switch(class){	//seleciona a banco de acordo com a classe escolhida

		case 0:
			bilhete(class);
			break;

		case 1:
			ver=0;
			cont=1;
			while(ver==0){

				if(assento[cont]!=1){	//se este banco não estiver ocupado
					assento[cont]++;
					bilhete(cont);
					ver++;	//para o loop
				}
				cont++;
			}
			break;

		case 2:
			ver=0;
			cont=6;
			while(ver==0){

				if(assento[cont]!=1){	//se este banco não estiver ocupado
					assento[cont]++;
					bilhete(cont);
					ver++;	//para o loop
				}
				cont++;
			}
			break;

	}/* END switch(class) */
}


void bilhete(int n)
{

	system("clear");

	if(n!=0){

		if(n<=5){

			printf("%s\nX PRIMEIRA CLASSE X\n  ASSENTO: %d\n%s\n", "---------------", n, "---------------");
		}else
			printf("%s\nX ECONÔMICA X\n  ASSENTO: %d\n%s\n", "-------------", n,"-------------");
	}else
		printf("%s\n", "Próximo voo sairá em 3 horas");
}

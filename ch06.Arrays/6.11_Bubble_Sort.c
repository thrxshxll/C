/*6.11_Bubble_Sort_*/
/*
	_questão a) e b)

	 -melhorando desempenho de bubble sort reduzindo a quantidade de 
	 passadas.
*/
#include <stdio.h>
#define TM 10

void Pout(int v[], int tm);
void ordenar(int v[], int tm);
void bubble(int v[], int tm);

int main(void)
{
	//int V[TM]={13,15,11,25,9,3,14,21,19,6};
	int V[TM]={1,8,2,3,6,4,5,7,10,9};


	Pout(V, TM);

	bubble(V, TM);

	Pout(V, TM);

}


void Pout(int v[], int tm)
{
	int cont;

	printf("\nV[]:\n");
	for(cont=0; cont<tm; cont++){

		printf("%d  ", v[cont]);
	}
	printf("\n");
}


void bubble(int v[], int tm)
{
	int pass, i, aux, ver, passada=0;

	for(pass=1; pass<tm; pass++){

		ver=0;
		for(i=0; i<tm-1; i++){

			if(v[i]>v[i+1]){

				aux= v[i];
				v[i]= v[i+1];
				v[i+1]= aux;
				i++; 	/*aqui está o pulo do gato! Como a condição ocorre e a
								ordenação é feita, então quer dizer que na próxima 
								passada a verificação dos dois ultimos não é mais
								necessária.
							*/
				ver++;	//verifica se houve troca
			}

		}// end for(i)


		passada++;	//conta o número de passadas

		if(ver==0){
				pass=tm;
			}

	}// end for(pass)

	printf("%d trocas\n", ver);
	printf("%d passadas\n", passada);
}
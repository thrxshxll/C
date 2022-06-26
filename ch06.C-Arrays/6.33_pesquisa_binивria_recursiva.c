//6.33_pesquisa_binária_recursiva
#include <stdio.h>

void bubbleSort(int v[], int size);
int binarySearch(int list[], int begin, int end, int key);

int main(void){

		int BEGIN=0, END, SKEY;
		int array[]={23,2,4,3,5,7,6,8,10,9,55,11,13,1};


		//determina quantos elementos o array possui
		END=sizeof(array)/sizeof(array[0])-1;

		// ordena array[]
		bubbleSort(array, END);

		printf("type the search key: ");
			scanf("%d", &SKEY);


		// a função binarySearch() é chamada como um subscrito
		// o valor que a função retorna é a possição da chave dentro array[]
		if(array[binarySearch(array, SKEY, BEGIN, END)]==SKEY){
			printf("key found!\n");
		}else
			printf("key din't find!\n");

	return 0;
}


 // list: array de inteiros
 // skey:	chave de busca
 // begin: subscrito inicial [0]
 // end: 	 subscrito final [quantidade de itens no array]

int binarySearch(int list[], int skey, int begin, int end){

	int middle=(begin+end)/2;

	if(skey==list[middle]){

		return middle;	// retorna a posição que a chave se encontra dentro do array[]
	
	}else if(skey<list[middle]){

			end=middle-1;
		}else
			begin=middle+1;

	
	if(end-begin >= 0)
		binarySearch(list, skey, begin, end);
		else
			return -1;

}


void bubbleSort(int v[], int size){

	int aux, x, q;

	for(x=0; x<size; x++){
			for(q=0; q<size; q++){
				if(v[q]>v[q+1]){

					aux=v[q];
					v[q]=v[q+1];
					v[q+1]=aux;
				}
			}
	}
	x=0;
	while(x<=size) printf("%d ", v[x++]);
	printf("\n");
}

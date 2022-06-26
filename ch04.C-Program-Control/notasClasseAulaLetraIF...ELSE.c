/*Notas de classe de aula com letra with if...else*/
#include <stdio.h>

int main(void)
{
	int nota;
	int contA  = 0;
	int contB  = 0;
	int contC  = 0;
	int contD  = 0;
	int contF  = 0;

	printf("Digite as notas em letras.\n");
	printf("Digite o caractere EOF para encerrar.\n");

	while((nota = getchar()) != EOF ){

		if(nota == 'a'){
			contA++;
		}else if(nota == 'b'){
			contB++;
		}else if(nota == 'c'){
			contC++;
		}else if(nota =='d'){
			contD++;
		}else if(nota == 'f'){
			contF++;
		}else if(nota == '\n' || nota == '\t' || nota == ' '){

		}else if(nota != 'a' || nota != 'b' || nota != 'c' || nota != 'd' || nota != 'f'){
			printf("Letra incorreta.\n");
			printf("Digite uma nova nota.\n");
		}
	}

	printf("\nTotais para cada nota:\n");
	printf("A: %d\n", contA);
	printf("B: %d\n", contB);
	printf("C: %d\n", contC);
	printf("D: %d\n", contD);
	printf("F: %d\n", contF);

	return 0;
}

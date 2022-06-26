/*média de uma turma a partir da estrutura switch*/
#include <stdio.h>

int main(void)
{
	int nota, cont;
	int aCont = 0;
	int bCont = 0;
	int cCont = 0;
	int dCont = 0;
	int fCont = 0;
	float med;

	printf("Digite as notas em letras.\n");
	printf("Digite o caractere EOF para encerrar.\n");

	while((nota = getchar()) != EOF){

		switch(nota){
			case 'a':
				aCont += 9;
				cont++;
				break;

			case 'b':
				bCont += 7;
				cont++;
				break;

			case 'c':
				cCont += 5;
				cont++;
				break;

			case 'd':
				dCont += 4;
				cont++;
				break;

			case 'f':
				fCont += 3;
				cont++;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				printf("Letra de nota incorreta.");
				printf("Digite nova nota.\n");
				break;
		}

		
	}

	med = (aCont+bCont+cCont+dCont+fCont)/cont;

	if(med >= 9){
		printf("Média da turma: A\n");
	}else
		if(med >= 7){
		printf("Média da turma: B\n");
	}else
		if(med >= 5){
		printf("Média da turma: C\n");
	}else
		if(med >= 3){
		printf("Média da turma: D\n");
	}else
		if(med >= 2){
		printf("Média da turma: F\n");
	}

	return 0;
}
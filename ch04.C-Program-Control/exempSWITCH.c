/*Operações matemáticas através da estrutura de repetição SWITCH*/
#include <stdio.h>

int main(void)
{
	int soma = 0, mult=0, sub=0, n1, n2, opera;
	float div = 0;


	printf("1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir\n");
		scanf("%d", &opera);

		while(opera != -1 ){
			switch(opera){
				case 1:
					printf("Soma de dois inteiros: ");
					scanf("%d%d", &n1, &n2);
					soma = n1 + n2;
					printf("soma = %d\n\n\n", soma);
						printf("1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir\n");
						scanf("%d", &opera);
					break;

				case 2:
					printf("Diferença de dois inteiros: ");
					scanf("%d%d", &n1, &n2);
					sub = n1 - n2;
					printf("Diferença = %d\n\n\\", sub);
						printf("1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir\n");
						scanf("%d", &opera);
					break;

				case 3:
					printf("Produto entre dois inteiros: ");
					scanf("%d%d", &n1, &n2);
					mult = n1 * n2;
					printf("Produto = %d\n\n\n", mult);
						printf("1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir\n");
						scanf("%d", &opera);
					break;

				case 4:
					printf("Quociente entre inteiros: ");
					scanf("%d%d", &n1, &n2);
					div = n1 / n2;
					printf("Quociente = %f\n\n\n", div);
						printf("1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir\n");
						scanf("%d", &opera);
					break;

				case '\n':
				case '\t':
				case ' ':
					break;

				default:
					printf("Operação incorreta. informe uma nova operação.\n");
					scanf("%d", &opera);
					break;
			}
		}
	return 0;
}
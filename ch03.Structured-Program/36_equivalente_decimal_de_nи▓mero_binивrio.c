/*3.36_equivalente_decimal_de_número_binário*/
/*
	recebe um número binário e imprime equivalente em decimal.
*/

#include <stdio.h>


int quantidade_digitos(int quant);
void separa_numero(int nBinary, int dig[]);
int conversao_to_decimal(int dig[], int size);

int main(void)
{
	int nAlgarismo=0; //quantidade de dígitos no número
	int Dig[12];	//separar dígitos
	int Binary, Decimal;


	printf("type binary number: ");
		scanf("%10d", &Binary);	// recebe número binário de até dez dígitos


/*quantidade de dígitos*/
	nAlgarismo = quantidade_digitos(Binary);


/*separar o número binário*/
	separa_numero(Binary, Dig);


/*conversão binary to decimal*/
	Decimal = conversao_to_decimal(Dig, nAlgarismo);

	printf("%d(b) = %d(d)\n", Binary, Decimal);

}/*END main();*/



/*conta a quantidade de dígitos que há no número*/
int quantidade_digitos(int quant)
{
	int cont=0;

	while(quant>0){

		quant /= 10;

		cont++;
	}
	printf("dígitos: %d\n", cont);

	return cont;
}


/*separa os dígitos do número em um array*/
void separa_numero(int nBinary, int dig[])
{
	int x=0;

	while(nBinary>0){

		dig[x] = nBinary%10;	//array recebe o resto de cada divisão
		x++;

		nBinary /= 10;
	}
}


/*converte de binário para decimal*/
int conversao_to_decimal(int dig[], int size)
{
	int x, m=1, nDecimal=0;

	for(x=0; x<size; x++){

		nDecimal += dig[x] * m;
			m*=2;
	}

	return nDecimal;
}
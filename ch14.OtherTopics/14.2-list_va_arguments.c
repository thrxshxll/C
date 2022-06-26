#include <stdio.h>
#include <stdarg.h> //header necessário para usar as macros que manipulam os argumentos passados à funçao

//função com argumentos variáveis; primeiro argumento diz a quantidade de argumentos que irá receber
int prod(int i, ...);

int main(void){



	return 0x00;
}


int prod(int i, ...){
	int ans=1, j;

	va_list arg;
	va_start(arg, i);

	for(j=0; j<i; j++){
		ans*=va_arg(arg, int);
	}

	va_end(arg);
	return ans;
}
#include <stdio.h>
#include <string.h>

// minhas próprias funções de conversão de caracteres numéricos para valores
// numéricos

double atof(char *str);
int atoi(char *str);
long atol(char *str);
double strtod(char *str, char **pt);
long strtol(char *str, char **pt, int base);
unsigned long strtoul(char *str, char **pt, int base);

int main(void){
	long int in;
	unsigned long int uin;
	double fn;
	char *pt;

	// printf(": %lf\n", atof("433.198412"));
	// printf(": %d\n", atoi("2048"));
	// printf(": %ld\n", atol("12345678999"));

	
	/*fn=strtod("33666.14159hell", &pt);
	printf("%lf\n%s\n", fn, pt);*/

	/*in=strtol("15hacktheplanet", &pt, 10);
	printf(": %ld\n: %s\n", in, pt);*/

	uin=strtoul("f1uxk", &pt, 16);
	printf("%lu\n%s\n", uin, pt);

	return 0x00;
}

double atof(char *str){
	int i;
	double num=0, e=1.0;
	char *punct=strpbrk(str, ".");

//$ parte inteira
	i=punct-str;
	while(0<i--){
		num+=(str[i]-48)*e;
		e*=10;
	}

//$ parte decimal
	e=10;
	while(*(punct+1) != '\0'){
		num+=(*(++punct)-48)/e;
		e*=10;
	}
	return num;
}

int atoi(char *str){
	int num=0, ordem=1, i=strlen(str);

	while(0<i--){
		num+=(str[i]-48)*ordem;
		ordem*=10;
	}
	return num;
}

long atol(char *str){
	int long num=0, ordem=1;
	int i=strlen(str);

	while(0<i--){
		num+=(str[i]-48)*ordem;
		ordem*=10;
	}

	return num;
}

double strtod(char *str, char **pt){
	int ordem=1, tm=strspn(str, ".0123456789abcdefABCDEF");
	double ans=0;
	
	*pt=&str[tm];

	while(0<tm-- && str[tm]!='.'){
		ans+=(str[tm]-48)*ordem;
		ordem*=10;
	}
	ans/=ordem;

	ordem=1;
	while(0<tm--){
		ans+=(str[tm]-48)*ordem;
		ordem*=10;
	}
	return ans;
}

long strtol(char *str, char **pt, int base){
	int long num=0, ordem=1, tm;

	tm=strspn(str, "0123456789");
	*pt=&str[tm];
	switch(base){
		case 8:
			while(0<tm--){
				num+=(str[tm]-48)*ordem;
				ordem*=8;
			}
			break;

		case 10:
			while(0<tm--){
				num+=(str[tm]-48)*ordem;
				ordem*=10;
			}
			break;

		case 16:
			tm=strspn(str, "0123456789abcdefABCDEF");
			*pt=&str[tm];
			while(tm--){
				switch((str[tm])){
					case 65 ... 90:
						num+=(str[tm]-55)*ordem;
						break;

					case 97 ... 122:
						num+=(str[tm]-87)*ordem;
						break;

					default:
						num+=(str[tm]-48)*ordem;
				}
				ordem*=16;
			}
	}
	return num;
}

unsigned long strtoul(char *str, char **pt, int base){
	unsigned long int num=0;
	int ordem=1, tm=strspn(str, "0123456789");

	*pt=&str[tm];
	switch(base){
		case 8:
			while(0<tm--){
				num+=(*(str-tm)-48)*ordem;
				ordem*=8;
			}
			break;

		case 10:
			while(0<tm--){
				num+=(str[tm]-48)*ordem;
				ordem*=10;
			}
			break;

		case 16:
			tm=strspn(str, "0123456789abcdefABCDEF");
			*pt=&str[tm];
			while(0<tm--){
				switch(str[tm]){
					case 65 ... 90:
						num+=(str[tm]-55)*ordem;
						break;

					case 97 ... 122:
						num+=(str[tm]-87)*ordem;
						break;

					default:
						num+=(str[tm]-48)*ordem;
				}
				ordem*=16;
			}
	}
	return num;
}
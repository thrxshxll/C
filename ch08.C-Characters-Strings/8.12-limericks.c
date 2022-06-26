#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char limerick(char* phrase);
void subs_func(char *phrase, int a);

int main(){
	srand(time(NULL));
	char phrase[200]="";
	char a, b, c, d, e;

	a=limerick(phrase);
		puts(phrase);

		while(b!=a){
			phrase[0]='\0';
			b=limerick(phrase);
		}puts(phrase);

	phrase[0]='\0';
	c=limerick(phrase);
		puts(phrase);

		while(d!=c){
			phrase[0]='\0';
			d=limerick(phrase);
		}puts(phrase);

	while(e!=b){
		phrase[0]='\0';
		e=limerick(phrase);
	}puts(phrase);

	return 0x00;
}


void subs_func(char *phrase, int a){
	char *subs_F[25]={"escolha", "folha", "toalha", "medalha", "malha", "pessoa", "canoa", "baroa", "camiseta", "careta", "testa", "artista",
	"carreta", "trombeta", "iena", "pena", "propilena", "bala", "escala", "faca", "casca", "íris", "mente", "corrente", "frente"};
	
	char *subs_M[27]={"pais", "lápis", "arcoíris", "dois", "cais", "tênis", "carro", "cachorro", "zorro", "braço", "palhaço", "estilhaço",
	"pedaço", "peito", "teto", "texto", "contexto", "pente",	"ovo", "caderno", "cabelo", "conteúdo", "teclado", "olho", "dedo", "amigo",
	"dente"};
	
	if(a<3)
		strcat(strcat(phrase, subs_F[rand()%25]), " ");
	else
		strcat(strcat(phrase, subs_M[rand()%27]), " ");
}

char limerick(char* phrase){

	char *artigo[6]={ "a", "uma", "alguma", "o", "um", "algum"};
	int a;

	char *verbo[20]={"estava", "colocou", "tentou", "balaçou", "falou", "chamou",
	"amou", "fudeu", "cuidou", "esqueceu", "pensou", "quis", "adotou", "ouviu",
	"programou", "escreveu", "queimou", "odiou", "fortaleceu", "cortou"};

	char *preposicao[14]={"de", "ante", "após", "até", "com", "contra", "desde",
	"em", "entre", "para", "perante", "por", "sem", "sobre"};

	char *conj[15]={"assim", "logo", "isto é", "ou seja", "consequentemente", "destarte",
	"por consequência", "portanto", "continuando", "viu-se que", "porque", "embora",
	"enquanto", "mesmo que", "tal que"};
	
	unsigned int size;

	strcat(strcat(phrase, artigo[a=rand()%6]), " ");
		subs_func(phrase, a);
		
	strcat(strcat(phrase, verbo[rand()%20]), " ");
	strcat(strcat(phrase, artigo[a=rand()%6]), " ");
		subs_func(phrase, a);
		
	strcat(strcat(phrase, preposicao[rand()%15]), " ");
	strcat(strcat(phrase, artigo[a=rand()%6]), " ");
		subs_func(phrase, a);
	
	return phrase[strlen(phrase)-2];
	// return strlen(phrase);
}
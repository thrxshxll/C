#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

	int c,x,y,z;
	double d,e,f;
	char* ptr;
	char s1[100], s2[100];

// a)
/*	c='x';
	putchar(c);
	c=toupper(c);
	printf("%c\n", c);*/

// b)
/*	c='f';
	printf("%s%s\n", isdigit(c) ? "é um" : "não é um", " dígito");*/

// c)
	// printf("long: %d\n", atol("1234567"));

//d)
	/*c='\t';
	printf("%s%s\n", iscntrl(c) ? "é um" : "não é um", " char de controle");*/

// e)
	// fgets(s1, 99, stdin);

// f)
	// puts(s1);

// g)
/*	strcpy(s1, "hello, friend. ckr abc cba");
	ptr=strrchr(s1, 'c');
	puts(ptr);*/

// h)
/*	c='8';
	putchar(c);*/

// i)
	d=strtod("8.63582", NULL);
	printf("d: %lf\n", d);

// j)
/*	c='f';
	printf("%s%s\n", isalpha(c) ? "é uma" : "não é uma", " letra");*/

// k)
	// c=getchar();

// l)
/*	strcpy(s1, "abcdefghijlkmnopqrtuvxwyz");
	strcpy(s2, "def");
	ptr=strstr(s1, s2);
	puts(ptr);*/

// m)
/*	c=' ';
	printf("%s%s\n", isprint(c) ? "é" : "não é", " imprimível");*/

// n)
/*	sscanf("1.27 10.3 9.432", "%lf%lf%lf", &d, &e, &f);
	printf("%lf %lf %lf\n", d, e, f);*/

// o)
/*	strcpy(s2, "Xn0xc");
	strcpy(s1, s2);
	puts(s1);*/

// p)
/*	strcpy(s1, "God hates us all");
	strcpy(s2, "eoai");
	ptr=strpbrk(s1, s2);
	puts(ptr);*/

// q)
	// printf("result: %d\n", strcmp("oi", "Oi"));

//	r)
/*	ptr=strchr("Xn0xc", '0');
	puts(ptr);*/

// s)
/*	x=9; y=3; z=6;
	sprintf(s1, "%7d%7d%7d", x,y,z);
	puts(s1);*/

// u)
/*	strcpy(s1, "oioioi");
	printf("s1 size: %ld\n", strlen(s1));*/

// v)
/*	c=atoi("-21");
	printf("c: %d\n", c);*/

// w)
/*	strcpy(s2, "hello, world!");
	ptr=strtok(s2, ",");
	puts(ptr);*/

	return 0x00;
}
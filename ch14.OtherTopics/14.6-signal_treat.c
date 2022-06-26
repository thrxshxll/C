#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handlerINT(int);
void handlerABRT(int sig);

int main(void){
	int sig;
	signal(SIGINT, handlerINT);
	signal(SIGABRT, handlerABRT);

	scanf("%d", &sig);

	if(sig==1)
		raise(SIGINT);
	if(sig==2)
		raise(SIGABRT);

	raise(SIGINT);
	raise(SIGABRT);

	return 0x00;
}

void handlerINT(int sig){
	int ans;
	printf("\nSIGINT(%d)\n\nContinue? 1(yes) | 0(not): ", sig);
	scanf("%d", &ans);

	if(ans)
		signal(SIGINT, handlerINT);
	else
		exit(EXIT_FAILURE);
}

void handlerABRT(int sig){
	int ans;
	printf("\nSIGABRT(%d)\n\nContinue? 1(yes) | 0(not): ", sig);
	scanf("%d", &ans);

	if(ans)
		signal(SIGABRT, handlerABRT);
	else
		exit(EXIT_FAILURE);
}
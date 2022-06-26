#include <stdio.h>
#include <string.h>

void getInformation(void);
int time_msg(char *info[5]);
void formated_lettle(char *info[5], int time);
int timeToint(char *timeInmsg);

int main(void){

	getInformation();

	return 0xc;
}
 
void getInformation(void){
	char name[128], addr[128], account[128], value[128], time[128];
	char *fields[5]={name, addr, account, value, time};

	scanf("%[^\n]", name);
	scanf(" %[^\n]", addr);
	scanf(" %[^\n]", account);
	scanf(" %[^\n]", value);
	scanf(" %[^\n]", time);

	formated_lettle(fields, timeToint(time));

}

void formated_lettle(char *info[5], int time){
	char header[512];

	sprintf(header, "\nOlá, %s, residente no endereco %s, proprietario da conta %s,\nestamos entrando em contado com voce pois consta no sitema que seu debito de R$%s está %s.\n", info[0], info[1], info[2], info[3], info[4]);

	switch(time){
		
		case 1:
			printf("%sLogo, pedimos que voce se dirija na agencia mais proxima a voce para efeturar o pagamento.\n", header);
			break;

		case 2:
			printf("%sLogo, aconselhamos que não deixe atrasar ainda mais tempo seu debito, pois será cobrado juros até 5%% desse valor.\n", header);
			break;
		
		case 3:
			printf("%sPortanto, solicitamos que não cause mais problemas para nossa empresa e vá pagar sua dívida.\n", header);
			break;
		
		case 4:
			printf("%sInfelizmente, teremos que deixar de solicitar o pagamento de sua dívida e que ir até sua residencia pegar algum objeto que pague seu debito.\n", header);
			break;
		
		case 5:
			printf("%sApesar das consequencias, teremos que ser mais severos com a cobrança de sua dívida.\nInfelizmente, seu prazo para o pagamento já esgotou e agora queremos sua alma como pagamento. Dessa vez, para seu acômodo, voce não precisa mais decidir se paga ou não, a qualquer hora sua alma será consumida!\n", header);
			break;
	}
	
}

int timeToint(char *timeInmsg){
	char *times[5]={"um","dois","tres","quatro","cinco"};
	char temp[5];
	int count=0;

	strncpy(temp, timeInmsg, strcspn(timeInmsg, " "));

	while(strcmp(times[count], temp))
		count++;

	return count+1;
}

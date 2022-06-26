#include <stdio.h>

struct client{
	int num;
	char name[16];
	char lastname[16];
	int age;
};
typedef struct client Client;

void insert(char *fileName);
void print(char *fileName);
void creat(char *fileName);
int menu(void);

int main(void){
	int choice;
	char fileName[16]={"data.dat"};

	while((choice=menu())){
		switch(choice){
			case 1:
				creat(fileName);
				break;

			case 2:
				insert(fileName);
				break;

			case 3:
				print(fileName);
				break;
		}
	}

	return 0x00;
}

void insert(char *fileName){
	FILE *fptr=NULL;

	Client user={0, "-", "-", 0};

	if((fptr=fopen(fileName, "r+"))==NULL)
		puts("ERROR");
	else{

			printf("num: ");
			scanf("%d", &user.num);

		while(user.num!=-1){

			printf("name: ");
			scanf("\n%s", user.name);

			printf("lastname: ");
			scanf("%s", user.lastname);

			printf("age: ");
			scanf("%d", &user.age);

			fseek(fptr, (user.num-1)*sizeof(Client), SEEK_SET);

			fwrite(&user, sizeof(Client), 1, fptr);

			printf("num: ");
			scanf("%d", &user.num);
		}

		fclose(fptr);
	}
}

void print(char *fileName){
	FILE *fptr=NULL;
	Client info={0, "-", "-", 0};

	if((fptr=fopen(fileName, "r"))==NULL)
		puts("ERROR");
	else{

		printf("%-6s%-16s%-16s%-6s\n", "num", "name", "lastname", "age");


		//sem esse crlh, a porra do último registro é mostrado duas vezes, desgraça S2
		fread(&info, sizeof(Client), 1, fptr);

		while(!feof(fptr)){

			if(info.num!=0)
				printf("%-6d%-16s%-16s%-6d\n", info.num, info.name, info.lastname, info.age);
			else{
				puts("empty file!");
			}

			fread(&info, sizeof(Client), 1, fptr);
		}

		fclose(fptr);
	}
}

void creat(char *fileName){
	FILE *fptr=NULL;

	Client empty={0, "-", "-", 0};

	if((fptr=fopen(fileName, "w"))==NULL)
		puts("ERROR");
	else{
		for(int i=1; i<=2; i++)
			fwrite(&empty, sizeof(Client), 1, fptr);

		fclose(fptr);
	}
}

int menu(void){
	int ans;
	printf("%s\n%s\n%s\n%s\n: ", "1. inicialize", "2. insert", "3. print", "0. exit()");
	scanf("%d",&ans);

	return ans;
}
//palídromos_recur
#include <stdio.h>
#include <string.h>

int test_palidromo(char str[], int end);

int main(void){

	char STR[26];
	int SIZE, ans;

	printf("type string: ");
		scanf("%[^\n]", STR);
		SIZE=strlen(STR);

	ans=test_palidromo(STR, SIZE-1);

	if(ans==1){
		printf("palídromo\n");
	}else
		printf("nâo é palídromo\n");

	return 0;
}

int test_palidromo(char str[], int end){

	static int x=0;
	int middle=end/2;	//metade da palavra
	
	if(str[x]==str[end]){

		if(x==middle/2){
			return 1;
		}else{
		x++;
		test_palidromo(str, end-1);
		}

	}else{
		return 0;
	}
}
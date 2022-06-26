//6.32_pesquisa_linear
#include <stdio.h>

int linearSearch(int list[], int size, int key);

int main(void){

	int x=0, find, skey, SIZE;
	int numbers[]={12,5,7,8,1,6,33,5,9,77,99,3};

	SIZE=sizeof(numbers)/sizeof(numbers[0]);
	
	printf("[ ");
	while(x<9) printf("%d ", numbers[x++]);
	 printf("]\n");;


	printf("search key: ");
		scanf("%d", &skey);

	find=linearSearch(numbers, SIZE-1, skey);

	if(find==skey){
		printf("key found!\n");
	}else
		printf("key didn't find!\n");


	
	return 0;
}


int linearSearch(int list[], int size, int key){

	if(list[size]==key){
		return list[size];

	}else{

		if(size!=-1)
			return linearSearch(list, size-1, key);
		else
			return -1;
	}

}
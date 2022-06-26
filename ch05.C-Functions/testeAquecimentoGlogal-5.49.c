/*testeAquecimentoGlogal-5.49*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int right=0, wrong=0;
	char ans;

	printf("1º) - O feito estufa é causado, principalmente, por quais tipos ações?\n");
		printf("a) Ações ambientalistas\n");
		printf("b) Ações antrópicas\n");
		printf("c) Destruições das florestas, somente\n");
		printf("d) Utilização excessiva de combustível renovável\n: ");
			scanf("%c", &ans);

			ans == 'b' ? right++ : wrong++;

	printf("\n\n2 - Qual a principal consequência resultante do aquecimento global?");
		printf("a) Somente o aquecimento da temperatura.\n");
		printf("b) Torna o clíma bom para a agropecuária.\n");
		printf("c) Alteração do clíma, intensificação do degelo nas calotas polares.\n");
		printf("d) Aumento da pluviosidade nas regiões mais industrializadas.\n: ");
			scanf("%c", &ans);
			
			ans == 'c' ? right++ : wrong++;


	printf("\n\n3 - O efeito estufa, principal causa do aquecimento global, é totalmente\nprejudicial assim para a terra e a vida humana?\n");
		printf("a) Sim. pois contribui somente para o aquecimento global.\n");
		printf("b) Não. O efeito estufa não é totalmente prejudicial, uma vez que\ntambém propicia o clíma para haver vida na terra.\n: ");
			
			scanf("%c", &ans);

			ans == 'c' ? right++ : wrong++;


	printf("\n\n4 - A destruição do meio natural é um intensificador para o aquecimento global?\n");
		printf("a) Não, até ajuda a manimizar as consequências.\n");
		printf("b) Sim, é a principal causadora.\n");
		printf("c) Sim, é uma das principais causadoras, além da queima excessiva de combustíveis fósseis.\n: ");
			
			scanf("%c", &ans);

			ans == 'c' ? right++ : wrong++;
  

  printf("\n\n5 - Quais destas ações previnem e diminuem o aquecimento global?\n");
  	printf("a) Reutilização dos materiais recicláveis.\n");
  	printf("b) Maior utilização possível das matérias primas finitas presentes na natureza.\n");
  	printf("c) Trocar o principal combustível fóssel, o petróleo, por outras alternativas renováveis que emitem menor taxa de CO2.\n: ");
  		
  		scanf("%c", &ans);

  		ans == 'c' ? right++ : wrong++;


		printf("right %d , wrong %d\n", right, wrong);
}
//Atividade 3 - Exercício 2

//Construa um projeto mostra o preço de um produto e sua procedência 
// a partir de seu preço e código de origem. 
//Caso o código não seja nenhum dos especificado, o produo é importado
//Considere a tabela e use o comand switch

//codigo de origem                    procedência
        //1                                Origem A
        //2                                Origem B
        //3                                Origem C
        //4                                Origem D
        //5 ou 6                           Origem E

#include <stdio.h>
#include<stdlib.h> //system (*pause)/system(cls)
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int codigo;//inteiros
	float preco;// decimais
	
 	printf("Preço:");
	scanf("%ff",&preco);
	printf("\nCodigo:");
	scanf("%d",&codigo);
	printf("\n");
	
	
	switch(codigo){
		
	   	case 1: 
		printf("Procedência: Origem A\n");
		printf("preco: %.2f",preco);
		break;
		
		case 2:
		printf("Procedência: Origem B\n");
		printf("preco: %.2f",preco);
		break;
		
		case 3:
		printf("Procedência: Origem C \n");
		break;
		
		case 4:
		printf("Procedência: Origem D \n");
		break;
		
		case 5:
		printf("Procedência:Origem E \n");
		break;
		
		case 6:
		printf("Procedência: Origem E\n");
		break;
	
		default:
		printf("Produto importado\n")	;
				
		}
		
}


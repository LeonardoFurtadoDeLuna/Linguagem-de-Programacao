//Atividade 3 - Exerc�cio 2

//Construa um projeto mostra o pre�o de um produto e sua proced�ncia 
// a partir de seu pre�o e c�digo de origem. 
//Caso o c�digo n�o seja nenhum dos especificado, o produo � importado
//Considere a tabela e use o comand switch

//codigo de origem                    proced�ncia
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
	
 	printf("Pre�o:");
	scanf("%ff",&preco);
	printf("\nCodigo:");
	scanf("%d",&codigo);
	printf("\n");
	
	
	switch(codigo){
		
	   	case 1: 
		printf("Proced�ncia: Origem A\n");
		printf("preco: %.2f",preco);
		break;
		
		case 2:
		printf("Proced�ncia: Origem B\n");
		printf("preco: %.2f",preco);
		break;
		
		case 3:
		printf("Proced�ncia: Origem C \n");
		break;
		
		case 4:
		printf("Proced�ncia: Origem D \n");
		break;
		
		case 5:
		printf("Proced�ncia:Origem E \n");
		break;
		
		case 6:
		printf("Proced�ncia: Origem E\n");
		break;
	
		default:
		printf("Produto importado\n")	;
				
		}
		
}


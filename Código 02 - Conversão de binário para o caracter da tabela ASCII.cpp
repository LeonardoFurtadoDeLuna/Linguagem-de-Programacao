/*
	Name: BinarioParaASCII
	Copyright: 
	Author: leonardo.furtado
	Date: 18/08/20 16:44
	Description: Algoritmo para a convers�o de n�meros bin�rios para os correspondentes
	             da tabela ASCII.         
*/


# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	int num, dig, pos, res, aux;
	int vetor[ ] = {1,2,4,8,16,32,64,128,256};
	num = res = dig = pos = aux = 0;
	
	puts("PROGRAMA PARA A CONVERS�O DE N�MEROS BIN�RIOS A SEU RESPECTIVO "
	"CARACTER DA TABELA ASCII");
	
	printf("\nInforme o n�mero bin�rio: ");
	scanf("%d", &num);
	aux = num;
	
	
	while(num>0)
	
	{
		dig = num%10;
		if(dig==1)
		  {
			res = res+vetor[pos];
		  }
		pos++;
		num=num/10;	
	}
	 

	printf("\nO n�mero bin�rio %d corresponde ao caracter: %c", aux, res);
	
}//FIM DO PROGRAMA

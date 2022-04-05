/*
	Name: BinarioParaASCII
	Copyright: 
	Author: leonardo.furtado
	Date: 18/08/20 16:44
	Description: Algoritmo para a conversão de números binários para os correspondentes
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
	
	puts("PROGRAMA PARA A CONVERSÃO DE NÚMEROS BINÁRIOS A SEU RESPECTIVO "
	"CARACTER DA TABELA ASCII");
	
	printf("\nInforme o número binário: ");
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
	 

	printf("\nO número binário %d corresponde ao caracter: %c", aux, res);
	
}//FIM DO PROGRAMA

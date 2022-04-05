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
	
	int num, dig, cont, asc[9999], pos, res, aux[9999];
	int vetor[ ] = {1,2,4,8,16,32,64,128,256};
	num = dig = pos = cont = 0;
	
	puts("PROGRAMA PARA A CONVERSÃO DE NÚMEROS BINÁRIOS A SEU RESPECTIVO "
	"CARACTER DA TABELA ASCII\n");
	puts("Para sair do programa digite o número 99\n");
	
  while(1)
  {
  	
	printf("Informe o número binário: ");
	scanf("%d", &num);
	
	if(num==99)
	{
		break;
	}
	aux[cont] = num;
	
	
	res = 0;
	pos=0;
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
	asc[cont] = res;
	cont++;

  }//FIM DO PRIMEIRO WHILE
  
  
    printf("\nOs números binários informados foram:\n");
    for(int i = 0; i<cont; i++)
    {
    	printf("%d ", aux[i]);
	}

	printf("\n\nA frase formada com os números é:\n");
	for(int i = 0; i<cont; i++)
    {
    	printf("%c ", asc[i]);
	}
	
	
}//FIM DO PROGRAMA

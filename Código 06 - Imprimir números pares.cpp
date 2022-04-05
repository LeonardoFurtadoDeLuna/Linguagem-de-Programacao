/*
	Name: ImprimirNumerosPares.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 20/08/20 16:57
	Description: Algoritmo para ler 8 números e imprimir os números pares.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h>
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	int num, cont, i, par[8];
	num = cont = i = 0;
	
	while(cont<8)
	{
	   printf("Informe um número inteiro: ");
	   scanf("%d", &num);
	   cont++;
	   
	   if(num%2==0)
	   {
	   	par[i] = num;
	   	i++;
	   }
	}
	
	if(i==0)
	{
		printf("\nVocê não informou nenhum número par");
	}
	else
	{
		printf("\nOs números pares informados foram: ");
	
	    for(int cont = 0; cont<i; cont++)
	    {
		   printf("%d ", par[cont]);
     	}
	}
	
	
}//FIM DO PROGRAMA
	
	
	
	
	


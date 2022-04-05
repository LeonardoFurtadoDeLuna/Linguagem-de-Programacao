/*
	Name: TrocarPosicoes.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 21/08/20 10:02
	Description: Programa que troca a posição dos números pelas extremidades.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	int num[10], aux[10], cont;
	cont = 0;
	
	while(cont!=10)
	{
		printf("Informe um número inteiro: ");
	    scanf("%d", &num[cont]);
	    aux[cont] = num[cont];
	    cont++;
	}
	
    cont = 0;
		
	for (int i=9; i>=0; i--)
	{
		num[cont] = aux[i];
		cont++;
			
	}
	
	
	for(cont = 0; cont<10; cont++)
	{
		printf("\n%d", num[cont]);
	}

	
}//FIM DO PROGRAMA

/*
	Name: CrescenteOuNao.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 21/08/20 10:02
	Description: Algoritmo que demonstra se a sequência informada pelo 
	usuário está em ordem crescente ou não.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	int num[14], aux, a, cont;
	cont = aux = a = 0;
	
	while(cont!=15)
	{
		printf("Informe um número inteiro: ");
     	scanf("%d", &num[cont]);
     	cont++;
	}
	
	for(int i=0; i<14; i++)
	{
			if(num[i] < num[i+1])
			{
			 aux++;
			}

	}
	
	if(aux == 14)
	{
		printf("\nA sequência de números informada ESTÁ na ordem crescente");
	}
	else
	{
		printf("\nA sequência de números informada NÃO ESTÁ na ordem crescente");
	}
	
}//FIM DO PROGRAMA
	

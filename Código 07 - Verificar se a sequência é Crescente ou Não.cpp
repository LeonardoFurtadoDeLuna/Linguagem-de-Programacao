/*
	Name: CrescenteOuNao.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 21/08/20 10:02
	Description: Algoritmo que demonstra se a sequ�ncia informada pelo 
	usu�rio est� em ordem crescente ou n�o.
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
		printf("Informe um n�mero inteiro: ");
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
		printf("\nA sequ�ncia de n�meros informada EST� na ordem crescente");
	}
	else
	{
		printf("\nA sequ�ncia de n�meros informada N�O EST� na ordem crescente");
	}
	
}//FIM DO PROGRAMA
	

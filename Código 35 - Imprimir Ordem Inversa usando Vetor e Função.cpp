/*
	Name: 
	Copyright: 
	Author: 
	Date: 09/10/20 19:30
	Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipação
int fun(int *vet);



main()
{
	int vet[10];
	int i = 0;
	
	//puts("Inicializando o Vetor...");
	for(int i = 0; i < 10; i++)
		vet[i] = 0;
	
	vet[0] = 1;
	vet[1] = 2;
	vet[2] = 3;
	vet[3] = 4;
	vet[4] = 5;
	vet[5] = 6;
	vet[6] = 7;
	vet[7] = 8;
	vet[8] = 9;
	vet[9] = 10;
	
	//puts("\nVetor carregado...");
	/*for(int i = 0; i > 10; i++)
	{
		
			
	}*/
}

int fun(int *vet)

{
	/*for(int i = 0; i<=10; i++)
	{
	   printf("\n%d", vet[i]);
	}*/
	
	printf("\n%d", vet[0]);
	
	
}


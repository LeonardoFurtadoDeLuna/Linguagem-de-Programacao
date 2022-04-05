/*
	Name: TabuadaComFuncao.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 09/10/20 19:04
	Description: Programa que mostra uma tabuada feita a partir de uma função ao usuário
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de protipação

int tab(int);

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	tab(num);
}//Fim do main

int tab(int a)
{
	printf("\nTABUADA DO %d\n", a);
	for(int i = 1; i <= 10; i++)
	{
	  printf("\n%d x %d = %d", a, i, a*i);	
	}
		
}

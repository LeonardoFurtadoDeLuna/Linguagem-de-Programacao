/*
	Name:Exer3P1 
	Copyright: 
	Author: leonardo.furtado
	Date: 13/10/20 09:30
	Description: Programa que lê dois números inteiros e realiza a troca entre eles SEM o uso de variável auxiliar. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipação

int trocaSemAuxiliar(int, int);

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	a = b = 0;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &a);
	
	printf("Informe um número inteiro: ");
	scanf("%d", &b);
	
	printf("\nNúmeros informados (Antes da troca): \n%d \n%d ", a, b);
	trocaSemAuxiliar(a,b);
	
		
}//Fim do main

//Funções

int trocaSemAuxiliar(int a, int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	
	return printf("\n\nNúmeros informados (Depois da troca): \n%d \n%d ", a, b);
	
}

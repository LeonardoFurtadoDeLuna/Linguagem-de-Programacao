/*
	Name:Exer3P1 
	Copyright: 
	Author: leonardo.furtado
	Date: 13/10/20 09:30
	Description: Programa que l� dois n�meros inteiros e realiza a troca entre eles SEM o uso de vari�vel auxiliar. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sess�o de prototipa��o

int trocaSemAuxiliar(int, int);

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	a = b = 0;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &a);
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &b);
	
	printf("\nN�meros informados (Antes da troca): \n%d \n%d ", a, b);
	trocaSemAuxiliar(a,b);
	
		
}//Fim do main

//Fun��es

int trocaSemAuxiliar(int a, int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	
	return printf("\n\nN�meros informados (Depois da troca): \n%d \n%d ", a, b);
	
}

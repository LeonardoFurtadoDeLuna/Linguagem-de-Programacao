/*
	Name: TrocaValorPonteiros.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 17/11/20 10:19
	Description: programa para ler dois n�meros, armazenar em 2 vari�veis e trocar de valor entre elas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


void troca(int *, int *);

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	a = 0;
	b = 0;
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("Conte�do de A: %d e B: %d", a, b);
	troca(&a, &b);
	printf("\nConte�do depois da troca de A: %d e B: %d", a, b);
	
}//Fim do programa

void troca(int *a, int *b) // * pega o conte�do do endere�o
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

/* 
ONDE USAR PONTEIROS
- Aloca��o din�mica de mem�ria (Malloc)
- Manipula��o de arrays (vetores e matrizes)
- Para retornar mais de um valor em uma fun��o
- Refer�ncia para: Listas, pilhas, filas, �rvores e grafos.
- Passagem de par�metros por refer�ncia

&a => Passa o endere�o na mem�ria da vari�vel "a"
*prtA => Conte�do apontado de "A" apontado pelo ponteiro "prtA"

/*

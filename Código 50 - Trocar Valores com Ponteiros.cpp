/*
	Name: TrocaValorPonteiros.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 17/11/20 10:19
	Description: programa para ler dois números, armazenar em 2 variáveis e trocar de valor entre elas.
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
	printf("Conteúdo de A: %d e B: %d", a, b);
	troca(&a, &b);
	printf("\nConteúdo depois da troca de A: %d e B: %d", a, b);
	
}//Fim do programa

void troca(int *a, int *b) // * pega o conteúdo do endereço
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

/* 
ONDE USAR PONTEIROS
- Alocação dinâmica de memória (Malloc)
- Manipulação de arrays (vetores e matrizes)
- Para retornar mais de um valor em uma função
- Referência para: Listas, pilhas, filas, árvores e grafos.
- Passagem de parâmetros por referência

&a => Passa o endereço na memória da variável "a"
*prtA => Conteúdo apontado de "A" apontado pelo ponteiro "prtA"

/*

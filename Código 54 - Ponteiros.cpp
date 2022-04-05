/*
	Name: Ponteiros.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 17/11/20 11:45
	Description: Programa para exemplificar o uso de ponteiros em c�digo C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, *ptrA, **pptrA; //derefer�ncia*/
	
	int vet[] = {32, 500, 155, -7};
	int *ptrVet;
	
	ptrVet = vet;
	
	
	a = 500;
	ptrA = &a;
	pptrA = &ptrA;
	
	printf("Conte�do de A: %d", a);
	printf("\nEndere�o de A: %p", &a);
	printf("\nConte�do de *ptra: %p", ptrA);
	printf("\n\nConte�do apontado por ptrA: %d", *ptrA);
	printf("\nEndere�o do ptrA: %p", &ptrA);
	
	printf("\n\nConte�do apontado por pptrA: %d", **pptrA);
	printf("\nEndere�o do pptrA: %p", &pptrA);

	
	puts("Endere�os do vetor: ");
	printf("\nConte�do da ptrVet: %d", *ptrVet);
	printf("\nEndere�o 0 do vetor: %p", &vet[0]);
	printf("\nEndere�o 1 do vetor: %p", &vet[1]);
	printf("\nEndere�o 2 do vetor: %p", &vet[2]);
	printf("\nEndere�o 3 do vetor: %p", &vet[3]);
	
	puts("Conte�do do vetor: ");
	printf("\nConte�do da ptrVet: %d", *ptrVet);
	printf("\nEndere�o 0 do vetor: %d", vet[0]);
	printf("\nEndere�o 1 do vetor: %d", vet[1]);
	printf("\nEndere�o 2 do vetor: %d", vet[2]);
	printf("\nEndere�o 3 do vetor: %d", vet[3]);
	
}//Fim do programa

/*
	Name: Ponteiros.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 17/11/20 11:45
	Description: Programa para exemplificar o uso de ponteiros em código C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, *ptrA, **pptrA; //dereferência*/
	
	int vet[] = {32, 500, 155, -7};
	int *ptrVet;
	
	ptrVet = vet;
	
	
	a = 500;
	ptrA = &a;
	pptrA = &ptrA;
	
	printf("Conteúdo de A: %d", a);
	printf("\nEndereço de A: %p", &a);
	printf("\nConteúdo de *ptra: %p", ptrA);
	printf("\n\nConteúdo apontado por ptrA: %d", *ptrA);
	printf("\nEndereço do ptrA: %p", &ptrA);
	
	printf("\n\nConteúdo apontado por pptrA: %d", **pptrA);
	printf("\nEndereço do pptrA: %p", &pptrA);

	
	puts("Endereços do vetor: ");
	printf("\nConteúdo da ptrVet: %d", *ptrVet);
	printf("\nEndereço 0 do vetor: %p", &vet[0]);
	printf("\nEndereço 1 do vetor: %p", &vet[1]);
	printf("\nEndereço 2 do vetor: %p", &vet[2]);
	printf("\nEndereço 3 do vetor: %p", &vet[3]);
	
	puts("Conteúdo do vetor: ");
	printf("\nConteúdo da ptrVet: %d", *ptrVet);
	printf("\nEndereço 0 do vetor: %d", vet[0]);
	printf("\nEndereço 1 do vetor: %d", vet[1]);
	printf("\nEndereço 2 do vetor: %d", vet[2]);
	printf("\nEndereço 3 do vetor: %d", vet[3]);
	
}//Fim do programa

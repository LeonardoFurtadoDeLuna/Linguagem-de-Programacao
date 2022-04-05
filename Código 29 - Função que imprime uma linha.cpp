/*
	Name: Linha.cpp
	Copyright: 
	Author: leonardo.luna
	Date: 22/09/20 09:45
	Description: Programa para demonstrar uma função que desenha uma linha com tamanho escolhido pelo usuário.
*/

#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

//Sessão de prototipação
void linha1();
void linha2(int);
void linha3(int, char);

main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int tam = 0;
	char caractere;
	char frase[100];
	
	linha1();
	/*
	printf("Quantos caracteres você quer na linha? ");
	scanf("%d", &tam);
	
	printf("Qual caractere você quer imprimir na linha? ");
	scanf(" %c", &caractere);*/
	
	printf("Digite uma frase: ");
	gets(frase);
	tam = strlen(frase);
	printf("O tamanho da frase é: %d\n", strlen(frase));
	linha2(tam);
	printf("%s\n", frase);
	linha2(tam);
	
	
	//linha3(tam, caractere);
	/*linha(34, '=');
	linha(12, '!');
	linha(83, '.');
	linha(2, '+');*/
	
	
}//fim do main

void linha2 (int x)
{
	for(int i = 0; i<x; i++)
	{
		printf("*");
	}
	printf("\n");
}

void linha3(int x, char c)

{
	for(int i = 0; i < x; i++)
	{
		printf("%c", c);
	}
	
	printf("\n");	
}

void linha1()
{
	puts("------------------------------");
}

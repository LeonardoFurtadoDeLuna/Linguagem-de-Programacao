/*
	Name: AprendizadoDeFuncoes.cpp
	Copyright: 
	Author: leonardo.luna
	Date: 22/09/20 09:45
	Description: Aprendizado de funções. Conceito e Implementação
*/

#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


//void = Tipo de retorno
//invoke = invocação de função

void linha();//prototipação 
int somar(int, int);
int sub(int, int);
int mut(int, int);
float divi(int, int);


main(void)

{
	setlocale (LC_ALL, "Portuguese");
	
	int a, b, total;
	a = b = 0;
	
	linha(); //invoke
	printf("Digite o valor de A:"); scanf("%d", &a);
	linha();
	printf("Digite o valor de B:"); scanf("%d", &b);
    //total = somar(a,b); //invocação da função somar
    linha();
    printf("O total da adição é: %d\n", somar(a,b));
    printf("O total da subtração é: %d\n", sub(a,b));
    printf("O total da multiplicação é: %d\n", mut(a,b));
    printf("O total da divisão é: %.2f\n", divi(a,b));
    linha();
    
}

void linha()
{
	puts("**********************");
}

int somar(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mut(int a, int b) // Essas váriaveis podem ser diferentes das de cima
//pois ele copia o conteudo das de cima nas variaveis declaradas aq
{
	return a * b;
}


float divi(int a, int b)
{
	return (float) a/b;
}


/*
	Name: Fibonacci.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 03/11/20 09:44
	Description: Programa para imprimir a sequ�ncia de fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//prototipa��o
int fibonacci(int);

int a, b, c;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int limite;
	limite = 0;
	
	a = 0;
	b = 1;
	c = 0;
    
	printf("Informe quantos termos voc� deseja que tenha na sequ�ncia: ");
	scanf("%d", &limite);

	fibonacci(limite);
}

int fibonacci(int limite)
{
	if(limite == 0)
	{
		exit(0);
	}
	
	else
	{
		a = b + c;
		printf("%d ", b);
		c = b;
		b = a;
	}
	return fibonacci(limite-1);
}

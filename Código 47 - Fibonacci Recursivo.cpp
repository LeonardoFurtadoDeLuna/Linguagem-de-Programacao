/*
	Name: FibonacciRecursivo.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 03/11/20 09:44
	Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Prototipação
int fibo (int);

main()
{
	int ger, i;
	
	printf("Digite quantos números deseja ver da sequência de Fibonacci: ");
	scanf("%d", &ger);
	
    for(i = 0; i < ger; i++)
    {
    	printf("%d ", fibo(i+1));
	}

}

int fibo (int num)
{
	if(num == 1 || num == 2)
	{
		return 1;
	}
	else
	{
		return fibo(num-1) + fibo(num-2);
	}
}

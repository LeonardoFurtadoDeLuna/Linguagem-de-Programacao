/*
	Name: FatorialRecursivo.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 03/11/20 09:44
	Description: Programa para calcular o Fatorial de um número por meio de uma função recursiva.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//prototipação
int fat(int);

main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int num, i, result;
	num = i = 0;
	result = 1;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	result = fat(num);
	
	/*
	for(i = num; i > 1; i--)
	{
		fat = fat*num;
		num--;
	}
	*/
	
	printf("O fatorial de %d é: %d", num, result);
}

int fat(int num)
{
	if(num == 1)
	{
		return 1;
	}
	
	return num * fat(num-1);
}



/*
	Name: Recursividade1
	Copyright: 
	Author: leonardo.furtado
	Date: 27/10/20 10:16
	Description: Programa para demonstrar a utiliza��o das fun��es recursivas - RECURSIVIDADE DIRETA
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sess�o de prototipa��o
int desenho(int);

int i = 0;

main()
{
	setlocale(LC_ALL,"Portuguese");
	puts("Pressione uma tecla para come�ar a recurs�o!!!");
	getchar();
	desenho(0);
}

int desenho(int x)
{
	
	if(x == 10)
		return x;
	    
	printf("%d, ", x);
	x++;
	desenho(x);
	//printf("%d, ", x--);
}

/*
	Name:
	Copyright: 
	Author: leonardo.furtado
	Date: 09/10/20 18:21
	Description: Calcular pot�ncia utilizando uma fun��o e um la�o de repeti��o
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sess�o de prototipa��o

int pot(int, int);

main()

{
   setlocale(LC_ALL, "Portuguese");
   int base, expoente, total;
   base = expoente = total = 0;
   
   printf("Informe o n�mero da base: ");
   scanf("%d", &base);
   
   printf("Informe o n�mero do expoente: ");
   scanf("%d", &expoente);
   
   printf("\nO n�mero %d elevado a %d � igual a %d", base, expoente, pot(base, expoente));	
	
}//Fim do main

//Fun��o

int pot(int a, int b)
{
	int c = 1;
	for(int i = 0; i < b; i++)
	{
		c = c * a;	
	}
	
	return c;
}


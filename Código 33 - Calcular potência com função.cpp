/*
	Name:
	Copyright: 
	Author: leonardo.furtado
	Date: 09/10/20 18:21
	Description: Calcular potência utilizando uma função e um laço de repetição
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipação

int pot(int, int);

main()

{
   setlocale(LC_ALL, "Portuguese");
   int base, expoente, total;
   base = expoente = total = 0;
   
   printf("Informe o número da base: ");
   scanf("%d", &base);
   
   printf("Informe o número do expoente: ");
   scanf("%d", &expoente);
   
   printf("\nO número %d elevado a %d é igual a %d", base, expoente, pot(base, expoente));	
	
}//Fim do main

//Função

int pot(int a, int b)
{
	int c = 1;
	for(int i = 0; i < b; i++)
	{
		c = c * a;	
	}
	
	return c;
}


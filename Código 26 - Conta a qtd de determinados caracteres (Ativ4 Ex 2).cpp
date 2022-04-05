/*
	Name: Ativ4Exer2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 08/09/20 11:40
	Description: Algoritmo que conta a quantidade de caracteres e de caracteres específicos
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char string[80];
	char letmin[] = "abcdefghijklmnopqrstuvwxyzç", numeros[] = "0123456789",
	pontuacao[] = ".:()!?,;\"-"; 
	int cont1, cont2, cont3;
	cont1 = cont2 = cont3 = 0;
	
	printf("Informe uma string de no máximo 80 caracteres: ");
	gets(string);
	
	for(int i = 0; i < strlen(string); i++)
	{
		for(int j = 0; j<strlen(numeros); j++)
		{
			if(string[i] == numeros[j])
			{
			  cont1++;	
			}
		}
	}
	
	for(int i = 0; i < strlen(string); i++)
	{
		for(int j = 0; j<strlen(letmin); j++)
		{
			if(string[i] == letmin[j])
			{
			  cont2++;	
			}
		}
	}
	
	for(int i = 0; i < strlen(string); i++)
	{
		for(int j = 0; j<strlen(pontuacao); j++)
		{
			if(string[i] == pontuacao[j])
			{
			  cont3++;	
			}
		}
	}
	
	printf("\n-> A string informada tem %d caracteres", strlen(string));
	printf("\n-> A string informada tem %d caracteres de número", cont1);
	printf("\n-> A string informada tem %d caracteres de letras minúsculas", cont2);
	printf("\n-> A string informada tem %d caracteres de pontuação", cont3);	
	
}

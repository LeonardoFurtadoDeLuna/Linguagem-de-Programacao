/*
	Name: Ativ4Exer3.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 10/09/20 16:16
	Description: Programa que lê uma string contendo palavras separadas por 
	espaço e as imprime uma abaixo das outras.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
 	char string [200], aux[200];
 	
 	printf("Escreva uma frase de no máximo 200 caracteres: ");
 	gets (string);
    
    for(int i = 0; i<strlen(string); i++)
    {
    	if(string[i] == ' ')
    	{
    		string[i] = '\n';
		}
	}
	
	printf("\n");
	printf("%s", string);
    
}//Fim do programa

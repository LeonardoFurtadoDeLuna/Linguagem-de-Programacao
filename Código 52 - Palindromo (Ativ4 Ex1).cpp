/*
	Name: Ativ4Exer1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 08/09/20 11:40
	Description: Algoritmo que indentifica se a string � um palindromo
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
 	char string1 [20], string2 [20];
 	
 	printf("Informe uma string de at� 20 caracteres: ");
 	gets ( string1 );
 	
 	
 	int i, j = 0;
 	
 	//Tirar espa�o na string
 	for(i = 0; i<strlen(string1); i++)
    {
    	if(string1[i] == ' ')
    	{
    		for(j = i; j<strlen(string1); j++)
    		{
    			string1[j] = string1[j+1];
			}	
		}
	}
	
	//Inverter a string1 na string2
	j = 0;
    for(i=strlen (string1)-1; i>=0; i--)
    {
    	string2[j] = string1[i];
    	j++;
	}
	
	string2[j] = '\0';
	
	printf("\nA string1 �: %s", string1);
	printf("\nA string2 �: %s", string2);
	
 	if(strcasecmp(string1, string2)==0)
 	{
 	    puts("\nA string informada � um PAL�NDROMO");
	}
	else
	{
		puts("\nA string informada n�o � um PAL�NDROMO");
	}
	
}//Fim do Programa

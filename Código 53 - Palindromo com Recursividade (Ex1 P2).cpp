/*
	Name: Exer1P2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 01/12/20 09:42
	Description: Algoritmo que indentifica se a string é um palindromo por meio de recursividade
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

//Sessão de prototipação
int TirarEspacodaString();
int InverterString();

char string1 [100], string2 [100];
int i, j;

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
 	i = 0;
 	
 	printf("Informe uma string de até 100 caracteres: ");
 	gets ( string1 );
 	
 	TirarEspacodaString();
 	i=strlen(string1)-1;
 	j = 0;
 	InverterString();
 	
 	//printf("\nA string1 é: %s", string1);
 	//printf("\nA string2 é: %s", string2);
	
 	if(strcasecmp(string1, string2)==0)
 	{
 	    puts("\nA string informada é um PALÍNDROMO");
	}
	else
	{
		puts("\nA string informada não é um PALÍNDROMO");
	}
 	
}//Fim do Programa
	
int TirarEspacodaString()
{
	if(i>strlen(string1))
	{
		return 1;
	}	
	
	if(string1[i] == ' ')
    	{
		    for(j = i; j<strlen(string1); j++)
    		{
    			string1[j] = string1[j+1];
			}		
		}
	
	i++;
	return TirarEspacodaString();
}

int InverterString()

{
	if(i<0)
	{
		string2[j] = '\0';
		return 1;
	}
	
    string2[j] = string1[i];
    j++;
    i--;
	
	return InverterString();
}
    

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
main () 
{ 
char nome1[100], nome2[100]; 

printf ("Digite o nome1: " );           
gets ( nome1 ); 
setbuf(stdin,NULL);

strcpy(nome2,nome1);
 
printf("Vetor 2: %s\n",nome2);
}


	/*
	
	push('Paulo Sergio Vol.13');
	push('Raul Seixas Vol.5');
	push('Globo de Ouro 13');
	push('Agnaldo Rayol Vol.2');
	push('The Beatles Please Please Me');
	puts("A vitrola foi carregada com 5 discos");
	*/


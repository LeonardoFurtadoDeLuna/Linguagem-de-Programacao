#include <stdio.h>/* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */ 
#include <locale.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/ 

 main () 
 
 { 

char nome [100]; 


	printf ("Digite seu nome: " );
	scanf ("%s", &nome ); 	
	//setbuf(stdin,NULL);
	printf ("Bom dia %s\t\n", nome );
	
 	printf ("Digite seu nome: " ); 

    gets ( nome ); 

    puts ("Bom dia");
    puts (nome);

 } 


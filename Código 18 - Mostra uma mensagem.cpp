#include <stdio.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */
#include <locale.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: �, �, � ,� etc. No printf( )*/

 main ()
{
 	char  nome[5];        
	printf ("Digite seu nome: " );
	scanf ("%s", nome ); 	
	printf ("Bom dia %s\n", nome );
 	system("PAUSE");
}

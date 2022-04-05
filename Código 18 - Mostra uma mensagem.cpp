#include <stdio.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */
#include <locale.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/

 main ()
{
 	char  nome[5];        
	printf ("Digite seu nome: " );
	scanf ("%s", nome ); 	
	printf ("Bom dia %s\n", nome );
 	system("PAUSE");
}

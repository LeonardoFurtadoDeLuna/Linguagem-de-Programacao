/*
	Name: Troca.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 06/10/20 10:06
	Description: programa para demonstrar a diferen�a entre a passsagem de par�metros por c�pia e refer�ncia  
*/


 # include <conio.h>
 # include <stdio.h>
 # include <locale.h> //Acentua��o para o Portugu�s
 # include <stdlib.h>

//Sess�o de prototipa��o
void trocar(int *, int *); //Prot�tipo da fun��o que N�O tem retorno (void) e recebe vlrs inteiros como 2 par�metros
 
 int a, b, aux; //contexto global (Escopo global)
 
 main()
 {
 	
 	//Vari�veis com escopo dentro do main
 	a = b = aux = 0;
 	
 	printf("\nEnd A: %p", &a);
 	printf("\nEnd B: %p", &b);
 	printf("\nEnd AUX: %p", &aux);
 	
 	printf("\n\nDigite o valor de A: "); scanf("%d", &a);
 	printf("Digite o valor de B: "); scanf("%d", &b);
 	
 	trocar(&a, &b); //invoke da fun��o para realizar a troca
 	
 	printf("\nNovo valor de A: %d", a);
 	printf("\nNovo valor de B: %d", b);
 	
 	
 }//Fim do main
 
void trocar(int *a, int *b)
{
	int aux; //a, b e aux s� existem dentro do escopo da fun��o trocar
	aux = *a;
 	*a = *b;
 	*b = aux;
 	
 	printf("\nNovo valor de A dentro da fun��o: %p", a);
 	printf("\nNovo valor de B dentro da fun��o: %p", b);
}

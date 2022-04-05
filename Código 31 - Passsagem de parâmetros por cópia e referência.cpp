/*
	Name: Troca.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 06/10/20 10:06
	Description: programa para demonstrar a diferença entre a passsagem de parâmetros por cópia e referência  
*/


 # include <conio.h>
 # include <stdio.h>
 # include <locale.h> //Acentuação para o Português
 # include <stdlib.h>

//Sessão de prototipação
void trocar(int *, int *); //Protótipo da função que NÃO tem retorno (void) e recebe vlrs inteiros como 2 parâmetros
 
 int a, b, aux; //contexto global (Escopo global)
 
 main()
 {
 	
 	//Variáveis com escopo dentro do main
 	a = b = aux = 0;
 	
 	printf("\nEnd A: %p", &a);
 	printf("\nEnd B: %p", &b);
 	printf("\nEnd AUX: %p", &aux);
 	
 	printf("\n\nDigite o valor de A: "); scanf("%d", &a);
 	printf("Digite o valor de B: "); scanf("%d", &b);
 	
 	trocar(&a, &b); //invoke da função para realizar a troca
 	
 	printf("\nNovo valor de A: %d", a);
 	printf("\nNovo valor de B: %d", b);
 	
 	
 }//Fim do main
 
void trocar(int *a, int *b)
{
	int aux; //a, b e aux só existem dentro do escopo da função trocar
	aux = *a;
 	*a = *b;
 	*b = aux;
 	
 	printf("\nNovo valor de A dentro da função: %p", a);
 	printf("\nNovo valor de B dentro da função: %p", b);
}

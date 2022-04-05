/*
	Name: CorrecaoExP3.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 20/10/20 11:55
	Description: Programa para ler duas variáveis inteiras e trocar de valor sem utilizar uma variável auxiliar
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipagem
void trocarSemAuxiliar(int *, int *);


main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	x = y = 0;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	
	printf("\nX: %d Y: %d", x, y);
	trocarSemAuxiliar(&x, &y);
	printf("\nX: %d Y: %d", x, y);
	
}//Fim do programa

//Funções

void trocarSemAuxiliar(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

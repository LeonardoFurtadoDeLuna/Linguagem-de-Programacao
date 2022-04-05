/*
	Name: Exer2P2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 01/12/20 09:42
	Description: Programa para imprimir a sequ�ncia de fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//prototipa��o
int fibonacci(int);

int a, b, c, cont;
int vetor[46];

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int limite, escolha;
	limite = escolha = 0;
	
	cont = 0;
	a = 0;
	b = 1;
	c = 0;
    
	printf("Informe quantos termos voc� deseja que tenha na sequ�ncia (no m�x 46): ");
	scanf("%d", &limite);

	fibonacci(limite);
	
	puts("\n\n     CONSULTA DE ELEMENTOS\n"
	"\nObs.: Para sair do programa digite 99");
	
	while(escolha!=99)
	{
	
	printf("\n\nInforme o elemento que voc� gostaria de ver da sequ�ncia: ");
	scanf("%d", &escolha);
	
	if(escolha < 1 || escolha > limite)
	{
		printf("O elemento %d� n�o faz parte da sequ�ncia", escolha);
	}
	else
	{
		printf("O %d� elemento �: %d ", escolha, vetor[escolha-1]);
	}
	
    }//Fim do while
	
} // Fim do programa

int fibonacci(int limite)
{
	if(limite == 0)
	{
		for(int i = 0; i < cont ; i++ )
		{
			printf("%d ", vetor[i]);
		}
		return 1;
	} 
	
	else
	{
		a = b + c;
		vetor[cont] = b;
		c = b;
		b = a;
	}
	cont++;
	return fibonacci(limite-1);
}

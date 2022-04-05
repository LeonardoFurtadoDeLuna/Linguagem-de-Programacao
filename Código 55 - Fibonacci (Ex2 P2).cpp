/*
	Name: Exer2P2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 01/12/20 09:42
	Description: Programa para imprimir a sequência de fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//prototipação
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
    
	printf("Informe quantos termos você deseja que tenha na sequência (no máx 46): ");
	scanf("%d", &limite);

	fibonacci(limite);
	
	puts("\n\n     CONSULTA DE ELEMENTOS\n"
	"\nObs.: Para sair do programa digite 99");
	
	while(escolha!=99)
	{
	
	printf("\n\nInforme o elemento que você gostaria de ver da sequência: ");
	scanf("%d", &escolha);
	
	if(escolha < 1 || escolha > limite)
	{
		printf("O elemento %d° não faz parte da sequência", escolha);
	}
	else
	{
		printf("O %d° elemento é: %d ", escolha, vetor[escolha-1]);
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

/*
	Name: CorrecaoEx1P1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 20/10/20 09:38
	Description: Programa para manipular um vetor por meio de funções específicas para cada intem da questão
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipagem

void exibirInverso();
int somarPares();
void mostrarParesAcimaDez();

int vet[10];

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i; //Variável local - só existe dentro do main
	puts("Digite 10 números inteiros");
	for(i = 0; i<10; i++)
	{
		scanf("%i", &vet[i]);
	}
	puts("Vetor carregado!!!");
	puts("Conteúdo do vetor impresso de forma inversa: ");
	
	exibirInverso(); //1°Invoke
	printf("\nA soma dos números pares é: %i", somarPares()); //2°Invoke
    mostrarParesAcimaDez(); //3°Invoke
}

void exibirInverso()
{
	int i; //Outra variável local - só existe dentro desta função
    for(i=9; i>=0; i--)
        printf("%i, ", vet[i]);
}

int somarPares()
{
	int x, soma;
	x = soma = 0;
	
	while(x<10)
	{
		if(vet[x]%2 == 0) //SE conteúdo do vetor módulo 2 for igual a zero.
	    {
	    	soma = soma + vet[x];
		}
	     x++;
	}//Fim do While
	
	 return soma;
}

void mostrarParesAcimaDez()
{
	int vetPares[10];
	int x = 0;
	int iPar = 0;
	
	do
	{
		if(vet[x]%2 == 0 && vet[x] > 10)
		{
			vetPares[iPar] = vet[x];
			iPar++;
		}
	x++;	
	}while(x<10);
	
	puts("\nExibindo somente os números pares acima de 10: ");
	for(x = 0; x<iPar; x++)
	{
		printf("%i, ", vetPares[x]);
	}
}

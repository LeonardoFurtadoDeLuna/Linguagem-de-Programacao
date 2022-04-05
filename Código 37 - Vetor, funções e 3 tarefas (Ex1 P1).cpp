/*
	Name: Exer1P1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 13/10/20 09:30
	Description: Programa que carrega um vetor com 10 n�meros inteiros e realiza tr�s tarefas
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h>

//Sess�o de prototipa��o

void inverso();
void somapar();
void novovetor();

int vet[10];//Vari�vel global

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//puts("Inicializando o Vetor...");
	for(int i = 0; i < 10; i++)
		vet[i] = 0;
		
	vet[0] = 1;
	vet[1] = 2;
	vet[2] = 3;
	vet[3] = 10;
	vet[4] = 11;
	vet[5] = 12;
	vet[6] = 20;
	vet[7] = 21;
	vet[8] = 22;
	vet[9] = 30;
	
	
	inverso();	
	somapar();
    novovetor();

}//Fim do main

//Fun��es

void inverso()
{ 
    printf("1) Exibi��o do vetor na forma inversa\n");
	for(int i = 9; i >= 0; i--)
	{
		printf("\n%d", vet[i]);
	}
}

void somapar()
{
	int soma = 0;
	for(int i = 0; i <10; i++)
	{
		if(vet[i]%2 == 0)
	   {
	   	soma = soma + vet[i];
	   }
	}
	
	printf("\n\n2) O total da soma dos n�meros pares do vetor � %d", soma);
}

void novovetor()
{
	int j=0;
	int nov[10];
	
	for(int i = 0; i < 10; i++)
	{
		if(vet[i]%2 == 0 && vet[i]>10)
	   {
	   	 nov[j] = vet[i];
	   	 j++;
	   }
	}
	
	printf("\n\n3) Vetor com n�meros pares maiores que 10:\n");
	for(int i = 0; i < j; i++)
	{
		printf("\n%d", nov[i]);
	}
}

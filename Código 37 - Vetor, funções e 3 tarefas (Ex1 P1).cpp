/*
	Name: Exer1P1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 13/10/20 09:30
	Description: Programa que carrega um vetor com 10 números inteiros e realiza três tarefas
*/

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h>

//Sessão de prototipação

void inverso();
void somapar();
void novovetor();

int vet[10];//Variável global

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

//Funções

void inverso()
{ 
    printf("1) Exibição do vetor na forma inversa\n");
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
	
	printf("\n\n2) O total da soma dos números pares do vetor é %d", soma);
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
	
	printf("\n\n3) Vetor com números pares maiores que 10:\n");
	for(int i = 0; i < j; i++)
	{
		printf("\n%d", nov[i]);
	}
}

/*
	Name: Exer3P2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 01/12/20 09:42
	Description: Programa para calcular as idades dos alunos do curso de ADS a partir da sua respectiva data de nascimento e em 
	             seguida calcular a m�dia das idades utilizando fun��o e ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <ctime> //biblioteca para manipular hora e data

//Sess�o de prototipa��o
void CalcularIdade(int *Nascimento);
void CalcularMedia(int *);

int idade, soma;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int Nascimento[3], alunos;
	idade = soma = alunos = 0;
	
	int cont = 1;
	
	printf("Informe a quantidade de alunos do curso de �nalise e Desenvolvimento de Sistemas: ");
	scanf("%d", &alunos);
	
	while(cont <= alunos)
	{
	   
	   printf("\n\n-> Informe a data de nascimento do %d� aluno (Somente n�meros): ", cont);
	   
	   printf("\n\nDia: ");
	   scanf("%d", &Nascimento[0]);
	
	   printf("M�s: ");
	   scanf("%d", &Nascimento[1]);
	
	   printf("Ano: ");
	   scanf("%d", &Nascimento[2]);	
	   
	   CalcularIdade(Nascimento);
	   printf("\nO %d�aluno tem %d anos", cont, idade);
	   cont++;
	}
	
	CalcularMedia(&alunos);
	
}//FIM DO PROGRAMA

void CalcularIdade(int *Nascimento)
{
	time_t data_tempo; //Declarar vari�vel
	time(&data_tempo); //Guardar vari�vel
	struct tm *data = localtime(&data_tempo); //Salva a data do computador *localtime = tempo local

	idade = data -> tm_year + 1900 - Nascimento[2];// Ano atual - ano de nasc
	                                     // 2020 - ano de nasc
	
	if(Nascimento[1] > (data -> tm_mon + 1) || Nascimento[1] == (data -> tm_mon + 1) && Nascimento[0] > (data -> tm_mday))
	// mes nasc > MES Virgente    OU  mes nasc = Mes Virgente    E  dia nasc > Hoje
	// out,nov,dec > set          OU  setembro = setembro        E  23 > 22
	{
		idade = idade-1;
	}
	
	soma = soma + idade;	
}

void CalcularMedia(int *alunos)
{
	float media = 0;
	
	media = (float) soma / *alunos;
	
	printf("\n\n-> A m�dia das idades dos alunos do curso de ADS � de: %.f anos", media);
}

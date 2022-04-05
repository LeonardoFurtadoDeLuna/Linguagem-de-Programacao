/*
	Name: CorrecaoEx2P1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 20/10/20 10:35
	Description: Programa para ler notas de alunos, calcular a média ponderada e classificar
	por meio de uma tabela de conceitos
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipagem

float calcularMediaPonderada(float, float);
char retornarConceito(float);

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2;
	float media;
	char conceito = ' ';
	
	nota1 = nota2 = 0.0;
	media = 0.0;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	media = calcularMediaPonderada(nota1, nota2);
	printf("A média ponderada é: %.2f", media);
    conceito = retornarConceito(media);
    printf("O aluno com a média %.2f conseguiu obter o conceito %c", media, conceito);
}

float calcularMediaPonderada(float nota1, float nota2)
{
	float mediaPond = 0;
	mediaPond = ((nota1*4) + (nota2*6))/ 10;
	return mediaPond;
}

char retornarConceito(float media)
{
	char conceito;
	if(media<3)
	{
		conceito = 'E';
	}
	else if (media<5)
	{
		conceito = 'D';
	}
	else if (media<7)
	{
		conceito = 'C';
	}
	else if (media<9)
	{
		conceito = 'B';
	}
	else
	{
		conceito = 'A';
	}
	return conceito;
	
}

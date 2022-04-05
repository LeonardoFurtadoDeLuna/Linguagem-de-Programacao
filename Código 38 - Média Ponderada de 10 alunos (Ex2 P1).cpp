/*
	Name: Exer2P1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 13/10/20 09:30
	Description: Programa para calcular a média ponderada de 10 alunos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipagem

float calcularMediaPonderada(float, float);
char retornarConceito(float);

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2;
	nota1 = nota2 = 0.0;
	int cont = 1;
	
	puts("PROGRAMA PARA CALCULAR A MÉDIA PONDERADA DOS ALUNOS\n");
	while(cont < 11)
	{
		printf("Aluno %d", cont);
		printf("\nInforme a primeira nota: ");
		scanf("%f", &nota1);
		printf("Informe a segunda nota: ");
		scanf("%f", &nota2);
		calcularMediaPonderada(nota1, nota2);
		cont++;	
	}//Fim do While
	
} //Fim do main

//Funções

float calcularMediaPonderada(float nota1, float nota2)
{
	float mediaP = 0.0;
	
	mediaP = (float) ((4*nota1) + (6*nota2))/ 10;
	retornarConceito(mediaP);
	return printf("\n- A média ponderada do aluno é %.2f\n\n", mediaP);
	
}

char retornarConceito(float mediaP)

{
	if(mediaP<3)
	    {
	     printf("- Conceito final E");
	    }
	else if (mediaP<5)
	    {
		  printf("- Conceito final D");
	    }
	else if (mediaP<7)
	    {
		  printf("- Conceito final C");
	    }
	else if (mediaP<9)
	    {
		  printf("- Conceito final B");
	    }
	else 
	    {
		  printf("- Conceito final A");
	    }
	    
}


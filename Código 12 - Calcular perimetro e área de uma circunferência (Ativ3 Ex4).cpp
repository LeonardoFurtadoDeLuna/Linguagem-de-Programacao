/*
	Name: Ativ3Exer4
	Copyright: 
	Author: leonardo.furtado
	Date: 02/09/20 08:55
	Description: Calcular área e perímetro de uma circuferência
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h> //Biblioteca para operações matemáticas
#define PI 3.14

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	float raio, A, P;
	A = P = raio = 0.0;
	
	printf("Informe o raio da circurferência: ");
	scanf("%f", &raio);
	
	A = (float) PI * pow(raio,2); //Área = PI * Raio^2
	P = (float) 2 * raio * PI; // Perímetro = 2*Raio*PI
	
	printf("\nA área da circuferência é igual a %.2f", A);
	printf("\nO perímetro da circuferência é igual a %.2f", P);
	
	
}//Fim do Programa


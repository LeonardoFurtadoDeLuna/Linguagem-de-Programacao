/*
	Name: Ativ3Exer4
	Copyright: 
	Author: leonardo.furtado
	Date: 02/09/20 08:55
	Description: Calcular �rea e per�metro de uma circufer�ncia
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h> //Biblioteca para opera��es matem�ticas
#define PI 3.14

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	float raio, A, P;
	A = P = raio = 0.0;
	
	printf("Informe o raio da circurfer�ncia: ");
	scanf("%f", &raio);
	
	A = (float) PI * pow(raio,2); //�rea = PI * Raio^2
	P = (float) 2 * raio * PI; // Per�metro = 2*Raio*PI
	
	printf("\nA �rea da circufer�ncia � igual a %.2f", A);
	printf("\nO per�metro da circufer�ncia � igual a %.2f", P);
	
	
}//Fim do Programa


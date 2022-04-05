/* programa que calcula o per�metro e a �rea de uma
circunfer�ncia de raio R (fornecido pelo usu�rio) */

#include <stdio.h> // inclui entrada-sa�da 
#include <math.h> // inclui fun��es matem�ticas 
#include <locale.h> //Permite o uso de acenta��o 
#define PI 3.14

int main()
{
	
setlocale(LC_ALL,"");
	
// Defini��o das variaveis 

float Raio, Perim, Area;

// Obten��o do Raio da circunferencia 
printf("Entre com o valor do raio:");
scanf("%f", &Raio);

// Calcular Perimetro do Circulo 
Perim = 2 * PI * Raio;

//Calcular Area da Circunferencia 
Area = PI * pow(Raio, 2); 

// Exibir Resultados 
printf("O perimetro da circunferencia de raio %.2f � %.2f \n\n", Raio, Perim);

printf("A area � %.2f", Area);

}

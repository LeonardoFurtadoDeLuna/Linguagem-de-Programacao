/* programa que calcula o perímetro e a área de uma
circunferência de raio R (fornecido pelo usuário) */

#include <stdio.h> // inclui entrada-saída 
#include <math.h> // inclui funções matemáticas 
#include <locale.h> //Permite o uso de acentação 
#define PI 3.14

int main()
{
	
setlocale(LC_ALL,"");
	
// Definição das variaveis 

float Raio, Perim, Area;

// Obtenção do Raio da circunferencia 
printf("Entre com o valor do raio:");
scanf("%f", &Raio);

// Calcular Perimetro do Circulo 
Perim = 2 * PI * Raio;

//Calcular Area da Circunferencia 
Area = PI * pow(Raio, 2); 

// Exibir Resultados 
printf("O perimetro da circunferencia de raio %.2f é %.2f \n\n", Raio, Perim);

printf("A area é %.2f", Area);

}

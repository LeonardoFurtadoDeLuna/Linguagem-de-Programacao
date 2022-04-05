/*
	Name: Ativ3Exer1.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 25/08/20 16:41
	Description: Programa que demostra quantos anos são necessários para que Carlos seja maior que Pedro.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h>
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	
	float alturaP, alturaC;
	int anos;
	
	alturaP = 1.50;
	alturaC = 1.10;
	
	for(anos = 0; alturaP>alturaC; anos++)
	{
	  alturaP = (float) alturaP + 0.02;
	  alturaC = (float) alturaC + 0.03;	
	}
	
	printf("\nAo passar %i anos Carlos será maior que Pedro, pois Carlos "
	"terá %.2f m de atura e Pedro terá %.2f m de altura", anos, alturaC, alturaP);
	
	
}//Fim do programa


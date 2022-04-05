// Atividade 3 - Exercício 1

//Pedro tem 1.50m de altura e cresce 2 cm por ano
// Carlos tem 1.10m e cresce 3 cm

//Este projeto mostra quantos anos serão necessários para que Carlos seja 
//maior que Pedro

// While- enquanto
//% %d - para representar números inteiros
//%%s  - para representar strings(letras)
//\n para pular linha

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	int HPedro=150;
	int HCarlos=110;
	int Tempo =0;


	//estrutura de repetição (a estrutura de repetição vai parar 
	// quando a idade de Pedro for maior que a de Carlos. 
	
	
	while(HCarlos<=HPedro)
	{
		HCarlos=HCarlos+3;
		HPedro=HPedro+2;
		Tempo=Tempo+1;
		}
		printf("Altura de Pedro é:%d cm\n\n", HPedro);
		printf("Altura de Carlos é:%d cm\n\n", HCarlos);
		printf("Tempo:%d anos", Tempo);
		
}

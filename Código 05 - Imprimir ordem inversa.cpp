/*
	Name: ImprimirOrdemInversa.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 20/08/20 18:07
	Description: Programa que imprimi a sequ�ncia de n�meros informados na ordem inversa.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont, vetor[9999];
	num = cont = 0;
	
	puts("Obs.: Para sair do programa digite o n�mero 999\n");
	
	while(num != 999)
	{
		printf("Informe um n�mero inteiro: ");
     	scanf("%d", &num);
     	vetor[cont]= num;
     	cont++;
	}
	
	printf("\nA ordem inversa da sequ�ncia de n�meros informados �: ");
	
	for(int i = cont-2; i>=0; i--)
	{
		printf("\n%d", vetor[i]);
	}
	
}//FIM DO PROGRAMA*/


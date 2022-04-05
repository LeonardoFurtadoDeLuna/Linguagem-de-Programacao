/*
	Name: ImprimirOrdemInversa.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 20/08/20 18:07
	Description: Programa que imprimi a sequência de números informados na ordem inversa.
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
	
	puts("Obs.: Para sair do programa digite o número 999\n");
	
	while(num != 999)
	{
		printf("Informe um número inteiro: ");
     	scanf("%d", &num);
     	vetor[cont]= num;
     	cont++;
	}
	
	printf("\nA ordem inversa da sequência de números informados é: ");
	
	for(int i = cont-2; i>=0; i--)
	{
		printf("\n%d", vetor[i]);
	}
	
}//FIM DO PROGRAMA*/


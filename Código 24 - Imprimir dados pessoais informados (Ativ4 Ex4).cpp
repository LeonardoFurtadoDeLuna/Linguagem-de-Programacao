/*
	Name: Ativ4Exer4.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 08/09/20 11:40
	Description: Algoritmo que pede informa��es pessoais ao usu�rio e as imprime
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[100], endereco[100], telefone[14], idade[4];
	
	printf("- Informe o seu nome completo: ");
	gets(nome);
	
	printf("- Informe a sua idade: ");
	gets(idade);
	
	printf("- Informe o seu endere�o: ");
	gets(endereco);
	
	printf("- Informe o seu n�mero de telefone: ");
	gets(telefone);
	
	printf("\nSeu nome � %s, voc� tem %s anos, mora na rua %s e seu telefone � %s.", nome, idade, endereco, telefone);
	 
}//Fim do programa

/*
	Name: RecursividadeIndireta.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 27/10/20 11:41
	Description: Programa para demonstrar a recursivas INDIRETA
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

//Sessão de prototipação
void validarLogin();
void validarSenha();

//Variáveis globais
char login[10] = "leonardo";
int senha = 123;

main()
{
   setlocale(LC_ALL, "Portuguese");
   validarLogin();	
	
}//Fim do programa

void validarLogin() //F1
{
	char usuario[10];
	printf("\nUsuário: ");
	scanf("%s", usuario); //vetor não precisa de & no scanf
	
	if (strcmp(usuario, login) == 0) //string compare. Se o resultado for 0(zero), as strings são iguais
	{
		validarSenha(); //Chama a F2
	}
	else
	{
		validarLogin(); //Chama a F1
	}
	
}

void validarSenha() //F2
{
	int pwd = 0;
	printf("\nSenha: ");
	scanf("%d", &pwd);
	
	if (pwd == senha)
	{
		puts("Login feito com sucesso - Acesso LIBERADO!!!");
	}
	else
	{
		validarLogin(); //Chama a F1
	}

}

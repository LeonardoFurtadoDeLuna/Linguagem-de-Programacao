/*
	Name: SimulacaoLogin
	Copyright: 
	Author: leonardo.furtado
	Date: 11/10/20 19:21
	Description: Programa que simula o login do Windowa
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipação

int validarLogin(char);
int validarSenha(int);

char u[9] = "Usuario1";
int senha = 12345;

main()
{
	char usuario[9];
	int senha;
	
	printf("Informe o seu usuário de login: ");
	scanf(" %c", &usuario);
	validarLogin(usuario);
	
	printf("Informe a sua senha: ");
	scanf("%d", &senha);
	validarSenha(senha);
	
	printf("")

	
}//Fim do main

int validarLogin(char u[9])
{
  	
}

int validarSenha(int senha);
{
	
	
}


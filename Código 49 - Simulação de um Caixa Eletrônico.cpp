/*
	Name: CaixaEletronico.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 04/11/20 18:04
	Description: Programa de simula��o de opera��es de um caixa eletr�nico.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sess�o de prototipa��o
void validarConta();
void validarSenha();
void servicos();

//Vari�veis globais
int erro = 0;
float dados [4];

//dados[0] = Conta do usu�rio cadastrada
//dados[1] = Senha cadastrada
//dados[2] = N�mero da conta informada para compara��o
//dados[3] = Saldo
//dados[4] = Senha informada para compara��o

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//CADASTRANDO CONTA E SENHA DO USU�RIO
	
	puts("BEM VINDO AO BANCO BTS!!!");
	
	printf("\nInforme o n�mero da sua conta: ");
	scanf("%f", &dados[0]);
	
	printf("\n- Verificamos que � o seu primeiro acesso, cadastre uma senha de 4 digitos para ter acesso aos nossos servi�os: ");
	scanf("%f", &dados[1]);
	
	puts("- Senha cadastrada com sucesso!!!\n"
	"- Voc� ser� encaminhado para a janela inicial");
	
	puts("\nPressione qualquer tecla para continuar...");
	getch();
	
	system("cls"); //Executa um comando dd Sistema Operacional (windows/DOS) 
	               //(MS-DOS - Microsoft - Disk Operation System
	              //cls = ClearScreen (Limpa a tela)
	              
	servicos();
		
}//Fim do programa

void servicos()
{
	//ACESSANDO OS SERVI�OS
	
	int opc = 0;
	float aux = 0.0;
	
	puts("BEM VINDO AO BANCO BTS!!!\n");
	validarConta();
	
	 while(1)
   {
   	system("cls");
   	
	puts("Escolha um dos servi�os abaixo: \n"
	"\n1 - Dep�sito          "
	"\n2 - Saque             "
	"\n3 - Saldo             "
	"\n4 - Troca de senha    "
	"\n5 - Sair              "
	"\n6 - Sair do programa\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: printf("A op��o selecionada foi a op��o 1 (Dep�sito)");
		        printf("\nQue valor voc� gostaria de depositar: ");
		        scanf("%f", &aux);
		        
		        dados[3] = dados[3] + aux;
		        printf("Dep�sito de %.2f efetuado com sucesso!!!", aux);
		        break;
		        
		case 2: printf("A op��o selecionada foi a op��o 2 (Saque)");
		        
				if(dados[3] <= 0)
				{
					printf("\nSeu saldo � de R$%.2f, insuficiente para saque", dados[3]);
				}
				else
				{
					aux = 0;
					printf("\nSaldo em conta %.2f", dados[3]);
					printf("\nInforme o valor a ser sacado do caixa: ");
					scanf("%f", &aux);
					printf("Saque de %.2f efetuado com sucesso", aux);
					dados[3] = dados[3] - aux;
				}
				break;
				
		case 3: printf("A op��o selecionada foi a op��o 3 (Saldo)");
		        printf("\nO seu saldo � de %.2f", dados[3]);
		        break;
		        
		case 4: printf("A op��o selecionada foi a op��o 4 (Troca de senha)");
				printf("\nInforme a nova senha de 4 digitos: ");
				scanf("%f", &dados[1]);
				break;
		        
		case 5: printf("A op��o selecionada foi a op��o 5 (Sair)");
		        erro = 0;
		        puts("\n\nPressione qualquer tecla para continuar...");
	            getch();
		        system("cls");
		        servicos();
		        
		case 6: printf("A op��o selecionada foi a op��o 6 (Sair do programa)");
		        exit(1);
		        
		default: printf("Voce n�o digitou nenhuma das op��es listadas acima, tente novamente!!!");
		         break;
		
	}//Fim do switch
	
	puts("\n\nPressione qualquer tecla para continuar...");
	getch();
	
   }//Fim do while
}

// Fun��es

void validarConta()
{
	printf("Informe o n�mero da sua conta: ");
	scanf("%f", &dados[2]);
	
	if (dados[0] == dados[2])
	{
		validarSenha();
	}
	else
	{
		validarConta();
	}
}

void validarSenha()
{
	printf("Informe a senha da sua conta: ");
	scanf("%f", &dados[4]);
	
	if (dados[1] == dados[4])
	{
		puts("Acesso LIBERADO!!!");
		puts("\nPressione qualquer tecla para continuar...");
	    getch();
	    system("cls");
	}
	else
	{
		erro++;
		if(erro == 3)
		{
			puts("Senha bloqueada - Procure a administra��o do banco para efetuar o desbloqueio\n");
			exit(1);
		}
		else 
		{
			if(erro == 2)
			{
				 printf("ATEN��O - Voc� s� tem mais 1 chance, seu acesso ser� bloqueado!!!\n\n");
			}
			else
			{
				printf("Senha incorreta!!! Voc� tem mais %d chances\n\n", 3-erro);
			}
			validarConta();
		}	
	}
}

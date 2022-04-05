/*
	Name: CaixaEletronico.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 04/11/20 18:04
	Description: Programa de simulação de operações de um caixa eletrônico.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Sessão de prototipação
void validarConta();
void validarSenha();
void servicos();

//Variáveis globais
int erro = 0;
float dados [4];

//dados[0] = Conta do usuário cadastrada
//dados[1] = Senha cadastrada
//dados[2] = Número da conta informada para comparação
//dados[3] = Saldo
//dados[4] = Senha informada para comparação

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//CADASTRANDO CONTA E SENHA DO USUÁRIO
	
	puts("BEM VINDO AO BANCO BTS!!!");
	
	printf("\nInforme o número da sua conta: ");
	scanf("%f", &dados[0]);
	
	printf("\n- Verificamos que é o seu primeiro acesso, cadastre uma senha de 4 digitos para ter acesso aos nossos serviços: ");
	scanf("%f", &dados[1]);
	
	puts("- Senha cadastrada com sucesso!!!\n"
	"- Você será encaminhado para a janela inicial");
	
	puts("\nPressione qualquer tecla para continuar...");
	getch();
	
	system("cls"); //Executa um comando dd Sistema Operacional (windows/DOS) 
	               //(MS-DOS - Microsoft - Disk Operation System
	              //cls = ClearScreen (Limpa a tela)
	              
	servicos();
		
}//Fim do programa

void servicos()
{
	//ACESSANDO OS SERVIÇOS
	
	int opc = 0;
	float aux = 0.0;
	
	puts("BEM VINDO AO BANCO BTS!!!\n");
	validarConta();
	
	 while(1)
   {
   	system("cls");
   	
	puts("Escolha um dos serviços abaixo: \n"
	"\n1 - Depósito          "
	"\n2 - Saque             "
	"\n3 - Saldo             "
	"\n4 - Troca de senha    "
	"\n5 - Sair              "
	"\n6 - Sair do programa\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: printf("A opção selecionada foi a opção 1 (Depósito)");
		        printf("\nQue valor você gostaria de depositar: ");
		        scanf("%f", &aux);
		        
		        dados[3] = dados[3] + aux;
		        printf("Depósito de %.2f efetuado com sucesso!!!", aux);
		        break;
		        
		case 2: printf("A opção selecionada foi a opção 2 (Saque)");
		        
				if(dados[3] <= 0)
				{
					printf("\nSeu saldo é de R$%.2f, insuficiente para saque", dados[3]);
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
				
		case 3: printf("A opção selecionada foi a opção 3 (Saldo)");
		        printf("\nO seu saldo é de %.2f", dados[3]);
		        break;
		        
		case 4: printf("A opção selecionada foi a opção 4 (Troca de senha)");
				printf("\nInforme a nova senha de 4 digitos: ");
				scanf("%f", &dados[1]);
				break;
		        
		case 5: printf("A opção selecionada foi a opção 5 (Sair)");
		        erro = 0;
		        puts("\n\nPressione qualquer tecla para continuar...");
	            getch();
		        system("cls");
		        servicos();
		        
		case 6: printf("A opção selecionada foi a opção 6 (Sair do programa)");
		        exit(1);
		        
		default: printf("Voce não digitou nenhuma das opções listadas acima, tente novamente!!!");
		         break;
		
	}//Fim do switch
	
	puts("\n\nPressione qualquer tecla para continuar...");
	getch();
	
   }//Fim do while
}

// Funções

void validarConta()
{
	printf("Informe o número da sua conta: ");
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
			puts("Senha bloqueada - Procure a administração do banco para efetuar o desbloqueio\n");
			exit(1);
		}
		else 
		{
			if(erro == 2)
			{
				 printf("ATENÇÃO - Você só tem mais 1 chance, seu acesso será bloqueado!!!\n\n");
			}
			else
			{
				printf("Senha incorreta!!! Você tem mais %d chances\n\n", 3-erro);
			}
			validarConta();
		}	
	}
}

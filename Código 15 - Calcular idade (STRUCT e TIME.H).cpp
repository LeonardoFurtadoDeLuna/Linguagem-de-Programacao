//Calcula a idade de uma pessoa


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h> // Permite o uso de localtime(), time_t e struct tm
#include <locale.h>

// Cria uma estrutura com os elementos dia, mês e ano correntes
struct data{
	
	 int dia, mes, ano;
};

main()
{
	
	setlocale(LC_ALL,"");
	
	//Definição e atribuição de valores às variáveis
	int dia, mes, ano, Idade;
	dia = mes = ano = Idade = 0;
	
	//Define uma struct para ser utilizada em funções que trabalham com data e hora.
	struct tm infotempo; 
	
	 //Dados do tipo time_t usado para representar tempo de calendário 
	time_t segundos; 
	 
	 //Depois de criar a struct é preciso criar a variável que vai utiliza-la(h)
	struct data h; 
	
	
	//Obterm tempo em segundos
	time(&segundos); // Pega a data do calendário em segundos e armazena na variável.
	
	// A função localtime recebe um tempo em segundos de uma variável do tipo time_t
	//Converte de segundos para o tempo local (localtime)
	//Armazena os dados na struct e retorna para uma struct do tipo tm.
	infotempo = *localtime(&segundos); 
	
//
	
	//Adicionando a data do sistema nas variáveis da struct atual:
	h.dia = infotempo.tm_mday;
	h.mes = infotempo.tm_mon + 1;
	h.ano = infotempo.tm_year + 1900;
	
	printf("Digite a sua data de nascimento (dd/mm/aaaa): "); scanf("%d/%d/%d", &dia, &mes, &ano);
	
	Idade = h.ano - ano;
	
	if(h.mes < mes)
		Idade--;
	else if(h.mes == mes)
	{
		if(h.dia < dia)
			Idade--;
			
			
	}
	
	printf("\nVocê nasceu em %02d/%02d/%d, logo você tem %d anos.\n\n", dia, mes, ano, Idade);

	system("pause");
	
	}
	
	


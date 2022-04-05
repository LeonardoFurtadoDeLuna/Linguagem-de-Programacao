//Calcula a idade de uma pessoa


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h> // Permite o uso de localtime(), time_t e struct tm
#include <locale.h>

// Cria uma estrutura com os elementos dia, m�s e ano correntes
struct data{
	
	 int dia, mes, ano;
};

main()
{
	
	setlocale(LC_ALL,"");
	
	//Defini��o e atribui��o de valores �s vari�veis
	int dia, mes, ano, Idade;
	dia = mes = ano = Idade = 0;
	
	//Define uma struct para ser utilizada em fun��es que trabalham com data e hora.
	struct tm infotempo; 
	
	 //Dados do tipo time_t usado para representar tempo de calend�rio 
	time_t segundos; 
	 
	 //Depois de criar a struct � preciso criar a vari�vel que vai utiliza-la(h)
	struct data h; 
	
	
	//Obterm tempo em segundos
	time(&segundos); // Pega a data do calend�rio em segundos e armazena na vari�vel.
	
	// A fun��o localtime recebe um tempo em segundos de uma vari�vel do tipo time_t
	//Converte de segundos para o tempo local (localtime)
	//Armazena os dados na struct e retorna para uma struct do tipo tm.
	infotempo = *localtime(&segundos); 
	
//
	
	//Adicionando a data do sistema nas vari�veis da struct atual:
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
	
	printf("\nVoc� nasceu em %02d/%02d/%d, logo voc� tem %d anos.\n\n", dia, mes, ano, Idade);

	system("pause");
	
	}
	
	


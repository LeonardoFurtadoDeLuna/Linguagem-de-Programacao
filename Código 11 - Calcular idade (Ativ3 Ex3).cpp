/*
	Name: Ativ3Exer3.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 25/08/20 17:47
	Description: Programa que calcula a idade de uma pessoa a partir da sua data de nascimento.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h>
# include <ctime> //biblioteca para manipular hora e data
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale (LC_ALL, "Portuguese");
	
	int dia, mes, ano, idade;
	dia = mes = ano = idade = 0;
	
	printf("Informe a sua data de nascimento (Somente números): ");
	
	printf("\n\nDia: ");
	scanf("%d", &dia);
	
	printf("Mês: ");
	scanf("%d", &mes);
	
	printf("Ano: ");
	scanf("%d", &ano);
	
	time_t data_tempo; //Declarar variável
	time(&data_tempo); //Guardar variável
	struct tm *data = localtime(&data_tempo); //Salva a data do computador *localtime = tempo local
	
	/*
	struct tm { int tm_sec; //representa os segundos de 0 a 59 
	            int tm_min; //representa os minutos de 0 a 59 
				int tm_hour; //representa as horas de 0 a 24 
				int tm_mday: //dia do mês de 1 a 31 
				int tm_mon; //representa os meses do ano de 0 a 11 
				int tm_year; //representa o ano a partir de 1900 
				int tm_wday; //dia da semana de 0 (domingo) até 6 (sábado) 
				int tm_yday; // dia do ano de 1 a 365 
				int tm_isdst; //indica horário de verão se for diferente de zero
			   };  
	*/
	
	//struct -> É uma variável que agrupa variáveis que tenham um objetivo em comum
	//time_t usado para representar tempo de calendário 
	//printf("\nData de Hoje -> %d/%d/%d", data -> tm_mday, data -> tm_mon + 1, data -> tm_year + 1900);
	
	idade = data -> tm_year + 1900 - ano;// Ano atual - ano de nasc
	                                     // 2020 - ano de nasc
	
	if(mes > (data -> tm_mon + 1) || mes == (data -> tm_mon + 1) && dia > (data -> tm_mday))
	// mes nasc > MES Virgente    OU  mes nasc = Mes Virgente    E  dia nasc > Hoje
	// out,nov,dec > set          OU  setembro = setembro        E  23 > 22
	{
		idade = idade-1;
	}
	
	printf("\nVocê nasceu em %d/%d/%d, logo você tem %d anos", dia, mes, ano, idade);
	
}//FIM DOM PROGRAMA

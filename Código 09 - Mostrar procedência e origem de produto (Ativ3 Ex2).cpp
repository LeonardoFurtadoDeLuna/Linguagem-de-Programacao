/*
	Name: Ativ3Exer2.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 25/08/20 17:47
	Description: Programa que informa a procedência de um produto
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h>
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	int cod;
	cod = 0;
	
		while(1)
  {
	system("cls"); //Executa um comando dd Sistema Operacional (windows/DOS) 
	               //(MS-DOS - Microsoft - Disk Operation System
	              //cls = ClearScreen (Limpa a tela)
	              
	puts("\n                     LOJÃO LIMEIRA                     \n"
	     "\nCÓD 1 - PRODUTO X................................R$ 52,00"
         "\nCÓD 2 - PRODUTO Y................................R$ 70,50"
	     "\nCÓD 3 - PRODUTO H................................R$ 52,00"
	     "\nCÓD 4 - PRODUTO L................................R$ 35,00"
	     "\nCÓD 5 - PRODUTO M................................R$ 20,00"
	     "\nCÓD 6 - PRODUTO N................................R$ 45,00"
		 "\n  -   - PRODUTOS S...................A partir de R$ 110,00"
		 "\n  0   - SAIR DO PROGRAMA                                 ");
	
	printf("\n- Informe o código do produto para consultar a procedência: ");
	scanf("%d", &cod);
	
	switch(cod)
	{
		case 1: printf("O Produto X custa R$ 52,00 e tem origem A");
		        break;
		
		case 2: printf("O Produto Y custa R$ 70,50 e tem origem B");
		        break;
		
		case 3: printf("O Produto H custa R$ 52,00 e tem origem C");
		        break;
		
		case 4: printf("O Produto L custa R$ 35,00 e tem origem D");
		        break;
		
		case 5: printf("O Produto M custa R$ 20,00 e tem origem E");
		        break;
		        
		case 6: printf("O Produto N custa R$ 45,00 e tem origem E");
		        break;
		        
		case 0: puts("Programa Finalizado!!!");
	            exit(1);
		
		default: printf("Os Produtos S custam a partir de R$ 110,00 e são PRODUTOS IMPORTADOS");
		         break;
		         
    }//FIM DO SWITCH
    
    puts("\n\nPressione qualquer tecla para continuar...");
	getch();
    
  }//FIM DO WHILE
	
}//FIM DO PROGRAMA

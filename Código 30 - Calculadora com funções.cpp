/*
	Name: Calculadora.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 18/08/20 16:44
	Description: Programa para simular o funcionamento de uma calculadoraint        
*/


 # include <conio.h>
 # include <stdio.h>
 # include <locale.h> //Acentuação para o Português
 # include <stdlib.h>
 # include <math.h>
 # include <windows.h>
 
 //Sessão de prototipação (Protótipo das funções)
 void menu();
 int somar(int, int);
 int subtrair(int,int);
 int multiplicar(int, int);
 float dividir(int, int);
 float potencia(int, int);
 int lernum1();
 int lernum2();
 
 
 int main()
 {
     setlocale(LC_ALL,"Portuguese");
     int opcao;
     
            
        while(1)
        {
          opcao = 0;  
          //system("clear");
          menu();
          scanf("%d", &opcao);
          
          switch(opcao)
          {
              case 1: printf("O resultado da adição é: %d", somar(lernum1(),lernum2()));
                      break;
                      
              case 2: 
			          printf("O resultado da subtração é: %d", subtrair(lernum1(),lernum2()));
                      break;
                      
              case 3: printf("O resultado da multiplicação é: %d", multiplicar(lernum1(),lernum2()));
                      break;   
                      
              case 4: printf("O resultado da divisão é: %.2f", dividir(lernum1(),lernum2()));
                      break;
                      
              case 5: printf("O resultado da potenciação é: %.2f", potencia(lernum1(),lernum2()));
                      break;
                      
                case 6:
                     exit(0);
              
          }//fim do switch
          
        }//fim do while
     return(0);
 }//fim do programa

 //Funções
 void menu()
 {
     printf("\n\nMenu de operações:"
            "\n=================="
            "\n1 - Adição"
            "\n2 - Subtração"
            "\n3 - Multiplicação"
            "\n4 - Divisão"
			"\n5 - Potência"
            "\n6 - Sair..."
            "\n=================="
            "\nEscolha sua opção: ");
 }
 

 int lernum1()
 {
     int num;
     printf("Digite número:"); 
     scanf ("%d", &num);
     return num;
 }
 
 int lernum2()
 {
     int num;
     printf("Digite número:"); 
     scanf ("%d", &num);
     return num;
 }
 
 int somar(int x, int y)
 {
      return x+y;
 }

int subtrair(int g, int h)
{
    return g - h;
}

int multiplicar(int x, int y)
{
    return x*y;
}

float dividir(int num1, int num2)
{
    return (float) num1/num2;
}

float potencia(int b, int e)
{
	int result = 0;
	for(int i = 0; i<e; i++ )
	    result = result + b;
	return result;
	//return pow(b,e);
}

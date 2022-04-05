/*
	Name: Calculadora.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 18/08/20 16:44
	Description: Programa para simular o funcionamento de uma calculadoraint        
*/


 # include <conio.h>
 # include <stdio.h>
 # include <locale.h> //Acentua��o para o Portugu�s
 # include <stdlib.h>
 # include <math.h>
 # include <windows.h>
 
 //Sess�o de prototipa��o (Prot�tipo das fun��es)
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
              case 1: printf("O resultado da adi��o �: %d", somar(lernum1(),lernum2()));
                      break;
                      
              case 2: 
			          printf("O resultado da subtra��o �: %d", subtrair(lernum1(),lernum2()));
                      break;
                      
              case 3: printf("O resultado da multiplica��o �: %d", multiplicar(lernum1(),lernum2()));
                      break;   
                      
              case 4: printf("O resultado da divis�o �: %.2f", dividir(lernum1(),lernum2()));
                      break;
                      
              case 5: printf("O resultado da potencia��o �: %.2f", potencia(lernum1(),lernum2()));
                      break;
                      
                case 6:
                     exit(0);
              
          }//fim do switch
          
        }//fim do while
     return(0);
 }//fim do programa

 //Fun��es
 void menu()
 {
     printf("\n\nMenu de opera��es:"
            "\n=================="
            "\n1 - Adi��o"
            "\n2 - Subtra��o"
            "\n3 - Multiplica��o"
            "\n4 - Divis�o"
			"\n5 - Pot�ncia"
            "\n6 - Sair..."
            "\n=================="
            "\nEscolha sua op��o: ");
 }
 

 int lernum1()
 {
     int num;
     printf("Digite n�mero:"); 
     scanf ("%d", &num);
     return num;
 }
 
 int lernum2()
 {
     int num;
     printf("Digite n�mero:"); 
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

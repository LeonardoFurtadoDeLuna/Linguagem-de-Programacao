/*
* Nome: CalculadoraReferencia.cpp
* Author: Aluno Fatec SPB
* Data: 06/outubro/2020
* Descrição: Programa para simular o funcionamento de uma calculadora por meio de funções com
* os parâmetros passados por referência
*/

# include <conio.h>
# include <stdio.h>
# include <locale.h> //Acentuação para o Português
# include <stdlib.h>
//# include <windows.h>
//Sessão de prototipação (Protótipo das funções)
void menu();
int somar(int *, int *);
int subtrair(int *,int *);
int multiplicar(int *, int *);
float dividir(int *, int *);
int lernum();

int main()
{
setlocale(LC_ALL,"Portuguese");
int opcao;
int a, b;

while(1)
{
opcao = 0;
system("clear");
menu();
scanf("%d", &opcao);
switch(opcao)
{
case 1: a = lernum();
b = lernum();
printf("O resultado da adição é: %d", somar(&a, &b));
break;
case 2: a = lernum();
b = lernum();
printf("O resultado da subtração é: %d", subtrair(&a, &b));
break;
case 3: a = lernum();
b = lernum();
printf("O resultado da multiplicação é: %d", multiplicar(&a, &b));
break;
case 4: a = lernum();
b = lernum();
printf("O resultado da divisão é: %.2f", dividir(&a,&b));
break;
case 5:
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
"\n5 - Sair..."
"\n=================="
"\nEscolha sua opção: ");
}
int lernum()
{
int num;
printf("Digite número:");
scanf ("%d", &num);
return num;
}
int somar (int *num1, int *num2)
{
return *num1 + *num2;
}

int subtrair(int *num1, int *num2)
{
return *num1 - *num2;
}

int multiplicar(int *num1, int *num2)
{
return *num1 * *num2;
}
float dividir(int *num1, int *num2)
{
return (float) *num1 / *num2;
}

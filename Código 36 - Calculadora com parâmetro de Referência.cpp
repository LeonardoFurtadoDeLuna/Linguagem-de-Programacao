/*
* Nome: CalculadoraReferencia.cpp
* Author: Aluno Fatec SPB
* Data: 06/outubro/2020
* Descri��o: Programa para simular o funcionamento de uma calculadora por meio de fun��es com
* os par�metros passados por refer�ncia
*/

# include <conio.h>
# include <stdio.h>
# include <locale.h> //Acentua��o para o Portugu�s
# include <stdlib.h>
//# include <windows.h>
//Sess�o de prototipa��o (Prot�tipo das fun��es)
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
printf("O resultado da adi��o �: %d", somar(&a, &b));
break;
case 2: a = lernum();
b = lernum();
printf("O resultado da subtra��o �: %d", subtrair(&a, &b));
break;
case 3: a = lernum();
b = lernum();
printf("O resultado da multiplica��o �: %d", multiplicar(&a, &b));
break;
case 4: a = lernum();
b = lernum();
printf("O resultado da divis�o �: %.2f", dividir(&a,&b));
break;
case 5:
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
"\n5 - Sair..."
"\n=================="
"\nEscolha sua op��o: ");
}
int lernum()
{
int num;
printf("Digite n�mero:");
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

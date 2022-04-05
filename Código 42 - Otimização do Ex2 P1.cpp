/**
* Nome .: Ex2P1.cpp
* Author: Prof. Alexandre Cassiano
* Data .: 20 de outubro de 2020
* Descrição: Programa para ler notas de alunos, calcular a média ponderada e classificar
* por meio de uma tabela de conceitos
*/
# include <conio.h>
# include <stdio.h>
//Prototipação das funções
float calcularMediaPonderada(float, float);
char retornarConceito(float);
int main()
{
float nota1, nota2;
nota1 = nota2 = 0.0;
printf("Digite a nota 1: ");
scanf("%f", &nota1);
printf("Digite a nota 2: ");
scanf("%f", &nota2);
printf("A média ponderada é: %.2f", calcularMediaPonderada(nota1, nota2));
printf("\nO aluno com a média %.2f obteve o conceito %c", calcularMediaPonderada(nota1, nota2), retornarConceito(calcularMediaPonderada(nota1, nota2)));
}//fim do programa
float calcularMediaPonderada(float nota1, float nota2)
{
return ((nota1 * 4) + (nota2 * 6))/10;
}
char retornarConceito(float media)
{
if(media < 3.0 )
return 'E';
else if(media < 5.0)
return 'D';
else if(media < 7.0)
return 'C';
else if(media < 9.0)
return 'B';
else
return 'A';
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
main () 
{ 
char nome1[100], nome2[100]; 

printf ("Digite o nome: " );           
gets ( nome1 ); 
setbuf(stdin,NULL);
printf ("Digite o sobrenome: " );           
gets ( nome2 ); 

strcat(nome1," ");
strcat(nome1,nome2);
 
printf("Nome Completo %s\n",nome1);
}

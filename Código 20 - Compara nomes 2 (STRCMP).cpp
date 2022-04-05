#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
main () 
{ 
char nome1[100], nome2[100]; 

printf ("Digite o nome1: " );           
gets ( nome1 ); 
//setbuf(stdin,NULL);
printf ("Digite o nome2: " );           
gets( nome2 ); 

if (strcmp(nome1,nome2)==0){
puts("Nomes Iguais");
 } 
 
else{
puts("Nomes Diferentes");
}
}

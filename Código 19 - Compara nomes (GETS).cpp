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
if (nome1==nome2){
puts("Nomes iguais");
 } 
else{
puts("Nomes diferentes");
}
}


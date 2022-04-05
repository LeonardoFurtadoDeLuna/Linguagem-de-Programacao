#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
main () 
{ 
char nome1[100], nome2[100]; 

printf ("Digite o nome1: " );           
gets ( nome1 ); 
setbuf(stdin,NULL);

strcpy(nome2,nome1);
 
printf("Vetor 2: %s\n",nome2);

printf("O vetor 2 tem %d",strlen(nome2));
}

/*
	Name: Matriz.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 21/08/20 10:02
	Description: Programa que imprime matrizes.
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao

int main ()

{
	setlocale(LC_ALL, "Portuguese");
		
	puts("\n         MATRIZES\n");
	printf("- Matriz 3x4 de zeros: \n\n");
	
	//PRIMEIRA MATRIZ
	
	int num [3] [4];
	
	    num [0] [0] = 0; 
		num [0] [1] = 0; 
		num [0] [2] = 0; 
		num [0] [3] = 0;
		
	    num [1] [0] = 0; 
		num [1] [1] = 0; 
		num [1] [2] = 0; 
		num [1] [3] = 0;
		
	    num [2] [0] = 0; 
		num [2] [1] = 0; 
		num [2] [2] = 0; 
		num [2] [3] = 0;
		
	for (int i = 0; i <3; i++)
        {
         for(int y = 0; y <4; y++)
		{  
            printf(" %d", num[i] [y]);
		}
            printf("\n");
		}
	    
	//SEGUNDA MATRIZ
	
	printf("\n- Matriz 4x4 de números aleatórios: \n\n");
	
	int num2 [4] [4];
	
	    num2 [0] [0] = 5; 
		num2 [0] [1] = 3; 
		num2 [0] [2] = 4; 
		num2 [0] [3] = 2;
		
		num2 [1] [0] = 1; 
		num2 [1] [1] = 3; 
		num2 [1] [2] = 4; 
		num2 [1] [3] = 9;
		
		num2 [2] [0] = 8; 
		num2 [2] [1] = 7; 
		num2 [2] [2] = 6; 
		num2 [2] [3] = 5;
		
		num2 [3] [0] = 4; 
		num2 [3] [1] = 2; 
		num2 [3] [2] = 4; 
		num2 [3] [3] = 7;
		
	for (int i = 0; i<4; i++)
        {
         for(int y = 0; y<4; y++)
		{  
            printf(" %d", num2[i] [y]);
		}
            printf("\n");
		}
		
	//TERCEIRA MATRIZ
	
	printf("\n- Matriz 4x5 de números negativos e positivos: \n\n");
	
	int num3 [4] [5];
	
	    num3 [0] [0] = 5; 
		num3 [0] [1] = -3; 
		num3 [0] [2] = -4; 
		num3 [0] [3] = 2;
		num3 [0] [4] = -1;
		
		num3 [1] [0] = 1; 
		num3 [1] [1] = -3; 
		num3 [1] [2] = -4; 
		num3 [1] [3] = 9;
		num3 [1] [4] = -1;
		
		num3 [2] [0] = 8; 
		num3 [2] [1] = -7; 
		num3 [2] [2] = -6; 
		num3 [2] [3] = 5;
		num3 [2] [4] = -1;
		
		num3 [3] [0] = 4; 
		num3 [3] [1] = -2; 
		num3 [3] [2] = -4; 
		num3 [3] [3] = 7;
	    num3 [3] [4] = -1;
	    
	    for (int i = 0; i<4; i++)
        {
         for(int y = 0; y<5; y++)
		{  
            printf(" %d ", num3[i] [y]);
		}
            printf("\n");
		}    
			
}//FIM DO PROGRAMA

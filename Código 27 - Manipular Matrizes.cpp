/*
	Name: ManipularMatrizes.cpp
	Copyright: 
	Author: leonardo.furtado
	Date: 15/09/20 11:36
	Description: Programa para manipular matrizes
*/

# include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
# include <locale.h> //biblioteca de localizacao

main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	int mat[4][4] = {{13,6,2,7}, 
	                 {4,8,25,9}, 
					 {12,18,19,71}, 
					 {9,315,24,82}};
	i = j = 0;
	
	/*puts("Digite os 16 elementos da matriz quadrada de ordem 4: ");
	
	do
	{
		do{
			scanf("%d", &mat [i][j]);
			j++;
				
		}while(j<=3);
		i++;
		j=0;
	}while(i<=3);*/
	
	puts("\nMatriz carregada");
	
	i = 0;
	j = 0;
	
	while(i<=3)
	{
		while(j<=3)
		{
		  printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);	
		  j++;
		}
		
		j=0;
		i++;
    }
    
	puts("\n\nImpresso por coluna...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	
	puts("\n\nElementos da Diagonal principal (DP)...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				if(i==j)
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	
	puts("\n\nElementos Acima da Diagonal Principal (DP)...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				if(i<j)
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	
	puts("\n\nElementos Abaixo da Diagonal Principal (DP)...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				if(i>j)
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	
	puts("\n\nElementos da Diagonal Secundária (DS)...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				if(i+j == 4 - 1)
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}	
	}
	
	puts("\n\nElementos Acima da Diagonal Secundária (DS)...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				if(i+j < 4 - 1)
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	
	puts("\n\nElementos Abaixo da Diagonal Secundária (DS)...");	
	for(j = 0; j<=3; j++)
	{
		for(i=0; i<=3; i++)
			{
				if(i+j > 4 - 1)
				printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	
}//Fim do programa

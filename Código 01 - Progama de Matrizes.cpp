#include <stdio.h>

 int main() {

 int mat [4] [3], i, y;
 
 	 mat [0] [0] = 2;
 	 mat [0] [1] = 2;
 	 mat [0] [2] = 2;
 	 
	 mat [1] [0] = 4;
 	 mat [1] [1] = 5;
 	 mat [1] [2] = 7;
 	 
 	 mat [2] [0] = 8;
 	 mat [2] [1] = 2;
 	 mat [2] [2] = 4;
 	 
 	 mat [3] [0] = -1;
 	 mat [3] [1] = -2;
 	 mat [3] [2] = -3;
 	 
 // for (i = 0; i < 9; i++)
 //{
 	//printf("\t\t\n%d", mat[0] [i]);
 //}
 
for (i = 0; i <4; i++)

{

for(y = 0; y <3; y++)

{ 

printf(" %d", mat[i] [y]);

}
printf("\n");

}
  
 
 }
 

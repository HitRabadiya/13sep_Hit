#include<stdio.h> 
void main() 
{ 
	int rows = 5,r,c; 

	for (r = 0; r < rows; r++)
	{ 

		for (c = 0; c <= r; c++)
		{ 
			printf("%c ", 'A' + c); 
		} 
		printf("\n"); 
	} 
}

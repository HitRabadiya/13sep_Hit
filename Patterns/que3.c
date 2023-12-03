#include <stdio.h> 
void main() 
{ 
	int rows = 5,r,col,n; 

	for (r=0; r<rows; r++) 
	{ 
		for (col=0; col<2 * (rows - i) - 1; col++) 
		{ 
			printf(" "); 
		} 

		for (n=0; n<2 * r + 1; n++) 
		{ 
			printf("* "); 
		} 
		printf("\n"); 
	} 
}

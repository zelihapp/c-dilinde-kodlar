#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Zeliha POLAT
//
//Yildizlarla sekil olusturma 

int main() {
	
	int i,j;
	for(i=1 ; i<=5 ; i++)
	{
		for(j=5 ; j>=i ; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

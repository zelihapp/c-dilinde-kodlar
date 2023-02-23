#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Zeliha POLAT
// (Ic ice dongu)yildizlarla dik ucgen olusturma
 
int main() {
	
	int i,j;
	for (i=1 ; i<=5 ; i++)
	{
		for(j=1 ;j<=i ; j++)
		{
			printf("*");
		}
		// j her donguden ciktiktan sonra degeri 1 olarak sifirlanir.
		printf("\n");
	}
	
	return 0;
}

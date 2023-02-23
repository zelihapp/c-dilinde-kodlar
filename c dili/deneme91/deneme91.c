#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Zeliha POLAT
//
// yildizlarla sekil olusturma 

/*	for(i=1 ; i<=5 ; i++)
	{
		for(j=5 ; j>=i ; j--)
		{
			printf("*");
		}
		printf("\n");
	} */
	
// kelebek kanadi ama yarim olanindan

int main() {
	
	int i,j,k,l;
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("*");
		}
		for(j=5 ; j>=i ; j--)
		{
			printf(" ");
		}
	    for(j=5 ; j>=i ; j--)
		{
			printf(" ");
		}
		for(j=1 ; j<=i ; j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	for(k=1 ; k<=5 ; k++)
	{
		for(l=5 ; l>=i ; l--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

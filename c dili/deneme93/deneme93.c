#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Zeliha POLAT
//
//yildizlarla sekil olusturma 

int main() {
	int i,j,taban;
	printf("Taban degerini girin:  ");
	scanf("%d",&taban);
	
	for(i=1 ; i<=taban ; i++)
	{
	   for(j=1 ; j<=i ; j++)
	   {
	   	    printf("*");
	    }
		printf("\n");	
	}	
	
	return 0;
}

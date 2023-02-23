#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Zeliha POLAT
//
// yildizlarla sekil olusturma (dik olmayan ucgen)
// OLUSTURAMADIK..

int main() {
	
	int i,j,boy;
	printf("ucgenin boyunu giriniz : ");
	scanf("%d",&boy);
	j=boy;
	
	for( ; boy>=1 ; boy--)
	{
		for(i=0 ; i<=boy ; i++)
		{
			printf(" ");
		}
		for (i=j ; i>=j ; i++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

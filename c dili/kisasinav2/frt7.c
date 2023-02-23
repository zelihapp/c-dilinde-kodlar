#include <stdio.h>
#include <stdlib.h>

/* Uc basamakli basamaklarinin kuplerinin toplami kendisini esit olan tam sayilara Armstrong Sayi denir.
   Bu program  3 dongu ile butun Armstrong Sayilari bulur */
   
   
int main() {
	
	int a , b , c , kup , sayi , k=1 ;
	
	for (a=1 ; a<=9 ; a++)
	for (b=0 ; b<=9 ; b++)
	for (c=0 ; c<=9 ; c++)
	{
	sayi = 100*a + 10*b + c ;
	kup = a*a*a + b*b*b + c*c*c;
			
	if (sayi == kup)
	{
	    printf("%d. %d\n",k++,sayi);
	}
}
	return 0;
}

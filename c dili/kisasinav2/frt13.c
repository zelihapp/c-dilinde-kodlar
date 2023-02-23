#include <stdio.h>
#include <stdlib.h>

void bankamatik(int para) {
	int a,yirmilik,onluk,beslik;
	a=para;
	if (a % 5 == 0)
	{
		yirmilik = a / 20;
		a -= yirmilik*20;
		
		onluk = a / 10;
		a -= onluk*10;
		
		beslik = a / 5;
		a -= beslik*5;
		
		printf("\nYirmilik : %d",yirmilik);
		printf("\nOnluk : %d",onluk);
		printf("\nBeslik : %d\n",beslik);	
	}
	else 
	{
		printf("Girilen miktar 5 tl ve katlari olmali.");
	}
	
	/* return deyimi yok*/
}

int main() {
	
	int miktar;
	
	printf("Cekilecek para miktari (TL): ");
	scanf("%d",&miktar);
	
	bankamatik(miktar);  //fonksiyon bir degiskene atanmamis
	
	return 0;
}

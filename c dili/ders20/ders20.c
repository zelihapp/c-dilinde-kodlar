#include <stdio.h>
#include <stdlib.h>

/* birim donusturme  */

int main() {
	
	int a,b;
	int secim;
	
	printf("Uzunlugu giriniz(m): ");
	scanf("%d",&a);
	
	printf("***DONUSTURME MENUSU***\n");
	printf("1 mm\n");
	printf("2 cm\n");
	printf("3 dm\n");
	printf("4 km\n");
	printf("Seciminiz: ");
	scanf("%d",&secim);
	
	switch (secim)
	{
		case 1:
			b = 1000 * a;
			break;
		case 2:
		    b = 100 * a;
		    break;
		case 3:
			b = 10 * a;
			break;
		case 4:
			b = a / 1000;
			break;
		default :
			printf("Hatali secim yaptiniz.");
	}
	
	printf("Sonuc: %d",b);
	
	return 0;
}

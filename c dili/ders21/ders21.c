#include <stdio.h>
#include <stdlib.h>

/* secilen mevsime gore ay isimlerini listeleyen program */

int main() {
	
	int m,secim;
	
	printf("**MEVSIMLER**\n");
	printf("1-Ilkbahar\n");
	printf("2-Yaz\n");
	printf("3-Sonbahar\n");
	printf("4-Kis\n");
	printf("Seciminiz: ");
	scanf("%d",&secim);
	
	switch (secim)
	{
		case 1:
			printf("Mart,Nisan,Mayis");
			break;
		case 2:
			printf("Haziran,Temmuz,Agustos");
			break;
		case 3:
			printf("Eylul,Ekim,Kasim");
			break;
		case 4:
			printf("Aralik,Ocak,Subat");
			break;
		default:
			printf("Hatali secim yaptiniz.");
			
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//klavyeden girilen paragrafin icinde kactane eposta var
	
	char paragraf[500];
	char email;
	int sayac_email;
	
	printf("Paragrafi giriniz:");
	gets(paragraf);
	printf("karajteri girinz: ");
	scanf("%c",&email);
	
	int i;
	for (i=0 ; paragraf[i] != '\0' ; i++)
	{
		if (paragraf[i] == email)
		{
			sayac_email++;
		}
	}
	
	printf("%c karakterinden %d adet var",email,sayac_email);
	
	return 0;
}

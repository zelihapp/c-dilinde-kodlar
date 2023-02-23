#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	
	do {
		
		printf("Bir Sayi Girin: ");
		scanf("%d",&sayi);
		printf("Sayinin Iki Kati = %d\n",sayi*2);
		
	}   while (sayi > 0) ;   // kosul. 0 dan buyuk sayi girdikce calisir 0dan kucuk sayi girildiginde donguden cikar.
	
	printf("Cevrim sona erdi ");
	
	return 0;
}

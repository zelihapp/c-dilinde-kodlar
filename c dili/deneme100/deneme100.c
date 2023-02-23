#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
// puts ve gets kullanimi 
//scanf bosluktan sonrasini almiyor gets hepsini alir / puts yerlestirmek , ekrana yazdirir 

int main() {
	
	char bilgi[40];
	printf("Bilgiyi girin: ");
	gets(bilgi);
	printf("\n\n");
	puts(bilgi);
	
	return 0;
}

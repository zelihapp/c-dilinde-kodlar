#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
// matematiksel fonksiyonlar pow kullanimi 
// pow => us alma 


int main() {
	
	int x,y,sonuc;
	printf("taban: ");
	scanf("%d",&x);
	
	printf("ussu: ");
	scanf("%d",&y);
	
	sonuc=pow(x,y);
	printf("Sonuc: %d",sonuc);
	
	
	return 0;
}

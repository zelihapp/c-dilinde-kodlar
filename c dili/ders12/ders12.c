#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

// sayilarin ortalamasini ve standart sapmasini hesaplayan program 

int main(void) {
	
	int i;
	float a[N] , ortalama , toplam=0.0 , std_sap = 0.0;
	
	for (i=0 ; i<N ; i++)
	{
		printf("%d.sayi: ",i+1);
		scanf("%f",&a[i]);
		
		toplam = toplam + a[i];
	}
	
	ortalama = toplam / N ;
	
	for (toplam = 0.0 , i=0 ; i<N ; i++)
	{
		toplam += pow(a[i]-ortalama, 2.0);
	}
	
	std_sap = sqrt( toplam / (N-1) );
	
	printf("Sayilarin ortalamasi: %f\n",ortalama);
	printf("Starndart sapmasi: %f",std_sap);
	
	
	return 0;
}

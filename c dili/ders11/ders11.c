#include <stdio.h>
#include <stdlib.h>

// girilen 10 sayinin aritmetik ortalamasini hesaplar 
#define N 10

int main() {
	
	int i;
	float a[N] , ortalama , toplam = 0.0 ;
	
	for (i=0 ; i<N ; i++)
	{
		printf("%d.sayi: ", i+1);
		scanf("%f", &a[i]);
		
		toplam = toplam + a[i];
	}
	
	ortalama = toplam / N;
	
	printf("ortalama: %f\n",ortalama);

	return 0;
}

#include <stdio.h>
 // girilen 5 sayinin aritmEtik ortalamasi
 
int main() {
	
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 tane sayi giriniz:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik = (a+b+c+d+e)/5.0;
	printf("Girdiginiz sayilarin aritmetik ortalamasi  %.2f", aritmetik);
	
	
	
	return 0;
	
}

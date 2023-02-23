#include <stdio.h>
#include <stdlib.h>

/* ideal kilo hesabi */

int main() {
	float ik,b;
	int c;
	printf("Boyunuzu giriniz(cm): ");
	scanf("%f",&b);
	printf("Cinsiyetiniz [1-Kadin / 2-Erkek]: ");
	scanf("%d",&c);
	
	if (c==1)
	{
		ik = 45.5 + 2.3*(b/2.54 - 60);
	}
	else
	{
		ik = 50 + 2.3*(b/2.54 - 60);
	}
	
	printf("Ideal Kilonuz: %f",ik);
	
	return 0;
}

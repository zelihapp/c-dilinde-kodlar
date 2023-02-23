#include <stdio.h>
#include <stdlib.h>

/* ideal kilo hesabi_1 */

int main() {
	
	int k,b;
	float bki;
	
	printf("Boyunuzu giriniz(cm): ");
	scanf("%d",&b);
	printf("Kilonuzu giriniz: ");
	scanf("%d",&k);
	
	bki = k / (b*b);
	
	if (bki<18.5)
	{
		printf("Zayif");
	}
	else if (bki>=18.5 && bki<25)
	{
		printf("Normal");
	}
	else if (bki>=25 && bki<30)
	{
		printf("Fazla Kilolu");
	}
	else if (bki>=30 && bki<35)
	{
		printf("1.derece obez");
	}
	else if (bki>=35 && bki<40)
	{
		printf("2.derece obez");
	}
	else 
	{
		printf("3.derece morbid obez");
	}
	
	return 0;
}

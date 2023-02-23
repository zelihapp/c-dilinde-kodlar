#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// created by Zeliha POLAT with Berfin AKTARLI 11.01.23

void not_hesapla(float vize,float final)
{
	float ortalama;
	ortalama=(vize*0.4)+(final*0.6);
	if (ortalama>=0 && ortalama<55)
	{
		printf("Dersten kaldiniz");
	}
	else if (ortalama>=55 && ortalama<70)
	{
		printf("sen inandigin her seyi basarirsin");
	}
	else if (ortalama >= 70 && ortalama<100)
	{
		printf("Dersten gectiniz . BRAVO");
	}
	else
	{
		printf("hata 404");
	}
	
}



int main() {
	
	not_hesapla(63,56);
	return 0;
}

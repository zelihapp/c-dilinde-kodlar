#include <stdio.h>
#include <stdlib.h>

int kalan(int a) {
	
	int ilksayi,ikincisayi,ucuncusayi ;
	
	ucuncusayi = a % 10 ;
	ikincisayi = ((a % 100) - ucuncusayi)/10;
	ilksayi = (a/100);
	
	if (a%10==ilksayi) {
		if (((a % 100)-ucuncusayi)/10 == ikincisayi)
		{
			if (a/100==ucuncusayi) {
				printf("Palindrom Sayidir.");
			}
			else
			{
				printf("Palindrom degildir.");
			}
		}
		else 
		{
			printf("Palindrom Degildir.");
		}
	}
	else
	{
		printf("Palindrom Degildir.");
	}
	
	return 0;
}

int main() {
	int a,ilksayi,ikincisayi,ucuncusayi;
	printf("3 basamakli bir sayi giriniz: ");
	scanf("%d",&a);
	
	kalan(a);
	
	return 0;
}

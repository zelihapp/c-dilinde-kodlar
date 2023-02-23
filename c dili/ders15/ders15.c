#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Fonksiyon ornegi 

float carp(a,b)
int a,b;
{
	float c;
	c=a*b;
	return c;
}

int main() {
	int k,l;
	float m;
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&k);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&l);
	m=carp(k,l);
	printf("Girilen iki sayinin carpimi:  %f",m);
	return 0;
}

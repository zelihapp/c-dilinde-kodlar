#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float carp(int a,int b)
{
	float c;
	c=a*b;
	return c;
}



void main() {
	int k,l;
	float m;
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&k);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&l);
	m=carp(k,l);
	printf("Girilen iki sayinin carpimi: %f",m);
}

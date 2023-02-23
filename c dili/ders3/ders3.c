#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
//fonksiyonlar / header

void topla1() {
	int a,b,c;
	/*printf("1.sayiyi giriniz:  ");
	scanf("%d",&a);
	printf("2.sayiyi giriniz:  ");
	scanf("%d",&b); */
	c=a+b;
	printf("Toplam:  %d",c);
}

int main() {
	int a,b,c;
    printf("1.sayiyi giriniz:  ");
	scanf("%d",&a);
	printf("2.sayiyi giriniz:  ");
	scanf("%d",&b);
	topla1();
	c=a+b;
	printf("Toplam:  %d",c);
	return 0;
}

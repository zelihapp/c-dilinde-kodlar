#include <stdio.h>
#include <stdlib.h>


//Zeliha POLAT
//
//fonksiyonlar geriye deger donduren oldugundan void kullanilmaz 

int toplam(int a,int b)
{
	int c;  // sonucu tutacak
	c=a+b;
	return c;
}


int main() {
	int t;
	t=toplam(4,5);
	printf("%d",t);

	return 0;
}

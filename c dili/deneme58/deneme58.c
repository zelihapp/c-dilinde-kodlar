#include <stdio.h>

int main() {
	int sonuc = 1;
	int a, h;
	printf("Taban Uzunlugu:\n");
	scanf("%d", &a);
	printf("Uzunluk:\n");
	scanf("%d", &h);
	sonuc = (a * h) / 2;
	printf("sonuc=%d\n", sonuc);

	return 0;


}
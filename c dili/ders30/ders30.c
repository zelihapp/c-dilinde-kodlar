#include <stdio.h>
#include <stdlib.h>



int main() {
	int a;
	printf("Notunuzu Giriniz (1-5): ");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("Cok zayif");
			break;
		case 2:
			printf("Zayif");
			break;
		case 3:
			printf("orta");
			break;
		case 4:
			printf("iyi");
			break;
		case 5:
			printf("Cok iyi");
			break;
		default:
			printf("Hatali secim yaptiniz");
	}
	return 0;
}

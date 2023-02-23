#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14
/* sinus alan hesabi*/

int main() {
	
	int kenar1,kenar2,aci,alan;
	
	printf("1.kenari giriniz: ");
	scanf("%d",&kenar1);
	printf("2.kenari giriniz: ");
	scanf("%d",&kenar2);
	printf("Aradaki aciyi giriniz: ");
	scanf("%d",&aci);
	
	alan=(kenar1*kenar2*sin(aci*pi/180))/2;
	
	printf("ucgenin alani: %d",alan);
	
	return 0;
}

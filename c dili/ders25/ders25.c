#include <stdio.h>
#include <stdlib.h>

//girilen tamsayinin iki sayinin kareleri toplami seklinde yazilip yazilmadigimi gosteren program 

int main() {
	int a,b,s;
	printf("Pozitif tam sayi: ");
	scanf("%d",&s);
	
	for(a=0 ; a<=s ; a++)
	for(b=0 ; b<=s ; b++)
	if(a*a+b*b==s)
	{
		printf("%u %u",a,b);
	}
	
	return 0;
}

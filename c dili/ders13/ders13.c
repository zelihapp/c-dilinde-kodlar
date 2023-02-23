#include <stdio.h>
#include <stdlib.h>
 

int main() {
	
	char s[40];
	int i = 0;
	
	printf("Bir seyler yaziniz : ");
	gets(s);
	
	// sonlandirici karaktere kadar karakterleri say 
	
	while (s[i] != '\0')
	{
		i++;
	}
	
	printf("Dizinin uzunlugu :  %d",i);
	
	// bosluklari da karakter olarak sayiyor !!
	return 0;
}

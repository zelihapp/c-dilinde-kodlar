#include <stdio.h>
#include <stdlib.h>

//bir dizinin en buyuk elemanini bulup ekrana yazma 

int main() {
	int a[10] = {100 , -250 , 400 , 125 , 550 , 900 , 689 , 450 , 347 , 700};
	int k,eb;
	
	//ilk eleman en buyuk kabul ediliyor 
	
	eb = a[0];
	
	for (k=1 ; k<=10 ; k++)
	{
		if (a[k] > eb)
		{
			eb = a[k];
		}
	}
	
	printf("en buyuk eleman: %d",eb);
	
	return 0;
}

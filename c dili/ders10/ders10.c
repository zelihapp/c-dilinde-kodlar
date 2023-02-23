#include <stdio.h>
#include <stdlib.h>
int obeb(int a,int b) {
	
	int bolen=2 , c=1 ;
	
	while (a>1 || b>1) {
		if (a%bolen==0 && b%bolen==0)
		{
			a = a / bolen;
			b = b / bolen;
			c = c*bolen;  //ebobu tutan degisken bu
		}
		else if (a%bolen==0 && b%bolen!=0)
		{
			a = a / bolen;
		}
		else if (a%bolen!=0 && b%bolen==0)
		{
			b = b / bolen;
		}
		else 
		{
			bolen=bolen+1;
		}
	}
	return c;
}

int okek(int a,int b) {
	int bolen=2,c=1;
	
	while (a>1 || b>1)
	{
		if (a%bolen==0 && b%bolen==0)
		{
			a = a / bolen;
			b = b / bolen;
			c = c*bolen;
		}
		else if (a%bolen==0 && b%bolen!=0)
		{
			a = a / bolen;
			c = c*bolen;
		}
		else if (a%bolen!=0 && b%bolen==0)
		{
			b = b / bolen;
			c = c*bolen;
		}
		else
		{
			bolen = bolen+1;
		}
	}
	return c;
}

int main() {
	int a,b,c,bolen;
	
	printf("iki sayi giriniz: ");
	scanf("%d %d",&a,&b);

    printf("OBEB(%d,%d) : %d\n",a,b,obeb(a,b));
    printf("OKEK(%d,%d) : %d\n",a,b,okek(a,b));
    
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int faktoriyel()
{
    int i,n,faktoriyel;
    faktoriyel=1;
    printf("faktoriyeli hesaplanacak sayi: ");
    scanf("%d",&n);

	for (i=1 ; i<=n ; i++)	
	{
		faktoriyel = faktoriyel * i;
	}
	printf("%d!=%d",n,faktoriyel);
	
	return 0;
}
	
float aritmetik_ortalama(float k,float l)
{
	int m;
	m=(k+l)/2;
	return m;
}	



	
int main() {
	int secim,n,a,k,l,m;
	printf("***MENU***\n");
	printf("1-Faktoriyel Hesabi\n");
	printf("2-Aritmetik Ortalama\n");
	printf("Yapilacak Islem:\n");
    scanf("%d",&secim);
    
    switch (secim)
    {
    	case 1:
    		faktoriyel(n);
    		break;
    		
    	case 2:
    		printf("Ortalamasi alinacak iki sayi giriniz: ");
    		scanf("%d %d",&k,&l);
    		m=aritmetik_ortalama(k,l);
    		printf("Sonuc: %d",m);
    		break;
    		
    	default :
		printf("Hatali secim yaptiniz.");
			
	}
    
    
    
    
    
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int topla(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

int carpma(int a,int b)
{
	int c;
	c=a*b;
	return c; //return c de olanilir mi oluyorsa neden 
}

int bolme(int k,int l)
{
	int m;
	m=k/l;
	return m;
}

int cikarma(int s,int d)
{
	int f;
	f=s-d;
	return f;
}

int main() {
	int secim;
	int x,y,z,a,b,c,s,d,f,k,l,m,p;
    printf("**menu**\n");
    printf("1-Toplama\n");
    printf("2-Carpma\n");
    printf("3-Bolme\n");
    printf("4-Cikarma\n");
    printf("Seciminiz: ");
    scanf("%d",&secim);

switch (secim)
{
	case 1:
		printf("1.sayiyi giriniz: ");
		scanf("%d",&x);
		printf("2.sayiyi giriniz: ");
		scanf("%d",&y);
		printf("Sonuc: %d",topla(x,y));
		break;
		
	case 2:
		printf("1.sayiyi giriniz: ");
		scanf("%d",&a);
		printf("2.sayiyi giriniz: ");
		scanf("%d",&b);
		printf("Sonuc: %d",carpma(a,b));
		break;
		
	case 3:
		printf("1.sayiyi giriniz: ");
		scanf("%d",&k);
		printf("2.sayiyi giriniz: ");
		scanf("%d",&l);
		p=bolme(k,l);
		printf("Sonuc: %d",p);
		break;
		
	case 4:
		printf("1.sayiyi giriniz: ");
		scanf("%d",&s);
		printf("2.sayiyi giriniz: ");
		scanf("%d",&d);
		printf("Sonuc: %d",cikarma(s,d));
		break;
		
	default :
		printf("Hatali secim yaptiniz");	
}
	
	return 0;
}

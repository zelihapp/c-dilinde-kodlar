#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// sayinin tek mi cift mi oldugunu bulan program 

int tekmi_ciftmi(int sayi)
{
	int deger;
	if (sayi % 2 == 0)
	deger=1;
	return deger;
}
int main() {
	int sayi,m;
	printf("Pozitif tamsayi giriniz: ");
	scanf("%d",&sayi);
	m=tekmi_ciftmi(sayi);
	if (m==0)
	{
		printf("Sayi tektir ");
	}
	else
	{
		printf("Sayi cifttir");
	}
	
	return 0;
}  


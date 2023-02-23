#include <stdio.h>
#include <stdlib.h> 


int main() {
	int i;
	int sayilar[] = {1,2,3,4,5}; //dizi tanimlanmasi
	/*bir degere ulasmak istiyorsak sayilarin indexleri ile cagiriyoruz
	printf("%d",sayilar[2]);  */
	for (i=0 ;  i<=4 ; i++)
	{
		printf("%d\n",sayilar[i]);
	}
	
	
	return 0;
}

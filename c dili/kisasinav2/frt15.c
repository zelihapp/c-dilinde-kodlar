#include <stdio.h>
#include <stdlib.h>

/*verilen bir tarihin yilin kaçinci günü oldugunu hesaplar ve 
çagrildigi yere gönderir.*/


int yilin_gunu(int , int ,int);
int artik_yil(int);


int main(void) {
	
	int gun = 22;   // tarih 1 agustos 2003 
	int ay = 7;
	int yil = 2003;
	
	printf("%02d %02d %d tarihi yilin ",gun,ay,yil );
    printf("%d. gunudur\n",yilin_gunu(gun,ay,yil) );
	
	return 0;
}

/*yil artik yil ise 1 aksi takdirde 0 a goturur */

int artik_yil(int yil)
{
	if (yil % 4 == 0 && yil % 100 != 0 || yil % 400 == 0)
	{
		return 1;
	}
	else;
	return 0;
}

/* Yilin kacinci gunu oldugunu hesaplar ve o gunu gonderir */

int yilin_gunu (int gun , int ay , int yil)
{
	int ygun = gun ;
	
	switch (ay-1)
	{
		case 12 : ygun += 31 ;
		case 11 : ygun += 30 ;
		case 10 : ygun += 31 ;
		case  9 : ygun += 30 ;
		case  8 : ygun += 31 ;
		case  7 : ygun += 31 ;
		case  6 : ygun += 30 ;
		case  5 : ygun += 31 ;
        case  4 : ygun += 30 ;
        case  3 : ygun += 31 ;
        case  2 : ygun += 28 + artik_yil(yil) ;   // 28+1 veya 28+0 
        case  1 : ygun += 31 ;
	}
	
	return ygun;
}





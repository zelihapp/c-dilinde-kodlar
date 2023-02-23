#include <stdio.h>

// 5.12.22 diziler ikinci ders 

    int main() {
    	
      /*	int sayilar[]={5,8,7,3,6,9};
    	int i;
    	
    	for(i=0 ; i<6 ; i++)
		{
			printf("%d\n",sayilar[i]);
			
		}   */
		
		
	  /*	int sayilar[]={10,15,20,35};
		int toplam=0;
		int i;
		for(i=0 ; i<4 ; i++)
		{
			toplam=toplam+sayilar[i];
		}
		
		printf("Toplam:  %d",toplam);   */
		
		
		int sayilar[]={1,2,3,4,5,6,7};
		int faktoriyel=1;
		int i;
		
		for(i=0 ; i<7 ; i++)
		{
			faktoriyel=faktoriyel*sayilar[i];
	     	printf("%d\n",faktoriyel);
	     	
    	}
		
			
	    return 0;    	
    	
	}
	

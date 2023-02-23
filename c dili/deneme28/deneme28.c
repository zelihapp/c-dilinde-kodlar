#include <stdio.h>

    int main() {
    	
    	// TYT puan turu hesaplama turkce:1.999  sosyal:2   matematik:3.998   fen:5.998   taban:100.160 
    	
    	float turkce,sosyal,matematik,fen,taban,toplampuan;
    	
    	taban=100.160;
    	
    	printf("Turkce Netiniz:  ");
    	scanf("%f",&turkce);
    	
    	printf("Sosyal Netiniz:  ");
    	scanf("%f",&sosyal);
    	
    	printf("Matematik Netiniz:  ");
    	scanf("%f",&matematik);
    	
    	printf("Fen netiniz:  ");
    	scanf("%f",&fen);
    	
    	toplampuan=turkce*1.999+sosyal*2+matematik*3.998+fen*5.998+taban;
    	printf("TYT Puan Turunde Sonucunuz:  %.1f\n",toplampuan);
    	printf("TEBRIKLER SUDE DOGAN!!!");
    	
    return 0;
    	
		
	}

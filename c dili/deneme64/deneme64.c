#include <stdio.h>

// satir sayisi ve sutun sayisi kullanici tarafindan girilen ve ekrana girilen degerlere gore carpim tablosu olusturan program

   int main() {
   	
   	int i,j,satir,sutun;
   	printf("Satir sayisi giriniz:  ");
   	scanf("%d",&satir);
   	printf("Sütun sayisi giriniz:  ");
   	scanf("%d",&sutun);
   	
   	for(i=1;i<=satir;i++) {
   		
   		for(j=1;j<=sutun;j++) {
   			
   			printf("%dx%d=%d    ",i,j,i*j);
			   
			   
			}
			printf("\n");
	   }
	   
	   return 0;
   }

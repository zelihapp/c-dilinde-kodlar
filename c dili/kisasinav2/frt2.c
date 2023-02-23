#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  ax*x + bx + c = 0 denkleminin karmasik sayili kokler dahil cozumu  */

int main() {
	
	float a , b , c , delta , x , x1 , x2 , kok_delta ;
	
	printf("a b c degerlerini giriniz: ");
	scanf("%f %f %f",&a,&b,&c);
	
	delta= b*b - 4.0*a*c;
	
	if (delta > 0.0) {
		
		x1 = (-b + sqrt(delta)) / (2.0*a);
		x2 = (-b - sqrt(delta)) / (2.0*a);
		
		printf("\nReel Kokler: ");
		printf("x1 =  %f\n",x1);
		printf("x2 =  %f",x2);
	}
	else if (delta < 0.0) {
		
		kok_delta = ( sqrt(-delta)) / (2.0*a);
		x = -0.5*b/a;
		
		printf("\nKarmasik Kokler: ");
		printf("\nx1 = %f + (%f)", x, kok_delta);
        printf("\nx2 = %f - (%f)i", x, kok_delta);
	}
	else {
		x = -0.5*b/a;
		
        printf("\nKokler esit:");
        printf("\nx1 = x2 = %f",x);

	}
	return 0;
}

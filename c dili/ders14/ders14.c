#include <stdio.h>
#include <stdlib.h>



int main(void) {
	
	char s[40] , gecici;
	int i , n;
	
	printf("Bir seyler yazin: ");
	gets(s);
	
	for(n=0 ; s[n] != '\0' ; n++)
	  ;
	
	for(i=0 ; i<n/2 ; i++)
	{
	   gecici = s[n-i-1];
       s[n-i-1] = s[i];
       s[i] = gecici;
    }

	printf("tersi : %s\n",s);
	
	
	return 0;
}

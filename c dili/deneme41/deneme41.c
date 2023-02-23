#include <stdio.h>

   int main() {
   	
   	int i;
   	i=1;
   	
   	while(i<=5)
   	{
   		printf("merhaba zeliha :)\n");
   		i++;
	}
	
	// eger i++ eklemezsek dongu sonsuza kadar devam eder cunku i degeri hep 1 olarak kalir ve 1 de hep 5den kucuk olacaktir...
	//... ama i++ ekledigimizde bir kez merhaba zeliha yazdirdiktan sonra i nin degeri bir artar ve en sonda 5 den buyuk oldugunda dongu sonlanir.
	return 0;
	
   }

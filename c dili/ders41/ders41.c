#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int tekmi_ciftmi()
{
    int sayi;
    printf("Pozitif tamsayi giriniz: ");
    scanf("%d",&sayi);
    if (sayi % 2 == 0)
    {
        printf("Sayi cifttir");
    }
    else
    {
        printf("Sayi tektir");
    }
    
    return 0;
}


int main() {
    
    tekmi_ciftmi();
    return 0;
}

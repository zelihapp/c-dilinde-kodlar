#include <stdio.h>

int main() {
    float vize, proje1, proje2, donemodevi, final,yilici,ortalama;
    int n,i;
    printf("ögrenci sayisini giriniz: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
        printf("*** %d.ci ögrenci*** \n",i);
        printf("%d. ci ögrencinin vize notu :",i);
        scanf("%f",&vize);
        if(vize>100 || vize<0 )
         {
             printf("hatali not girisi yaptiniz");
         }
        else
        {
            
            printf("%d. ci ögrencinin proje 1 notu :",i);
            scanf("%f",&proje1);
        }
        if(proje1>100 ||proje1<0 )
         {
             printf("hatali not girisi yaptiniz");
         }
        else{
            
            
            printf("%d. ci ögrencinin proje 2 notu :",i);
            scanf("%f",&proje2);
            if(proje2>100 ||proje2<0 )
             {
                 printf("hatali not girisi yaptiniz");
             }
            else
            {
                printf("%d. ci ögrencinin donemodevi notu :",i);
                scanf("%f",&donemodevi);
            }
            if(donemodevi>100 ||donemodevi<0 )
             {
                 printf("hatali not girisi yaptiniz");
             }
            else
            {
                printf("%d. ci ögrencinin  final notu :",i);
                scanf("%f",&final);
            }
            if(final>100 ||final<0 )
             {
                 printf("hatali not girisi yaptiniz");
             }
            else
            {
                yilici=((vize*0.45)+(proje1*0.2)+(proje2*0.2)+(donemodevi*0.15));
                printf("%d. ci ögrencinin  yilici notu : %f ",i,yilici);
                ortalama=(yilici*0.45+final*0.55);
                printf("%d. ci ögrencinin  ortalamasi : %f",i,ortalama);
            }
        }
        if( ortalama>=90 && ortalama<=100.00)
        {
            printf("AA");
        }
        if( ortalama>=85 && ortalama<=89.99)
        {
            printf("BA");
        }
        if( ortalama>=80&& ortalama<=84.99)
        {
            printf("BB");
        }
        if( ortalama>=75 && ortalama<=79.99)
        {
            printf("CB");
        }
        if( ortalama>=65 && ortalama<=74.99)
        {
            printf("CC");
        }
        if( ortalama>=58 && ortalama<=64)
        {
            printf("DC");
        }
        if( ortalama>=50 && ortalama<=57.99)
        {
            printf("DD");
        }
        if( ortalama>=40 && ortalama<=49.99)
        {
            printf("DF");
        }
        if( ortalama>=0 && ortalama<=39.99)
        {
            printf("FF");
        }
       if(ortalama>100 && ortalama<0 )
        {
            printf("hatali not girisi yaptiniz");
        }
        
        
        
        
        
        
        
        
       
    }
    
    return 0;
}

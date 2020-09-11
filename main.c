#include <stdio.h>
#include <stdlib.h>

void TersYaz(char dizi[],int uzunluk){
    if(uzunluk>0){
        printf("%c",dizi[uzunluk-1]);
        TersYaz(dizi,uzunluk-1);
    }
}
int main()
{
    char metin[101];
    printf("Metni giriniz:");
    gets(metin);
    TersYaz(metin,strlen(metin));

    return 0;
}

#include <stdio.h>

int main()
{
    char islem;
    float sayi1, sayi2, sonuc=0.0f;

 
    printf("BASİT HESAP MAKİNESİ UYGULAMASI\n");
    printf("-------------------------------\n");
    printf("Lütfen [sayı 1] [+ - * /] [sayı 2] giriniz\n");

    
    scanf("%f %c %f", &sayi1, &islem, &sayi2);

   
    switch(islem)
    {
        case '+': 
            sonuc = sayi1 + sayi2;
            break;

        case '-': 
            sonuc = sayi1 - sayi2;
            break;

        case '*': 
            sonuc = sayi1 * sayi2;
            break;

        case '/': 
            sonuc = sayi1 / sayi2;
            break;

        default: 
            printf("Geçersiz işlem!...");
    }

  
    printf("%.2f %c %.2f = %.2f", sayi1, islem, sayi2, sonuc);

    return 0;
}
#include <stdio.h>

int main()
{
    int gun;

    printf("Günün, haftanın kaçıncı günü olduğunu giriniz (1-7): ");
    scanf("%d", &gun);

    switch(gun)
    {
        case (1 || 2 || 3 || 4 || 5):  // hata verecek
            printf("Hafta İçi");
            break;
        case (6 || 7):  // hata verecek
            printf("Hafta Sonu");
            break;
        default: 
            printf("Geçersiz değer!... Lütfen 1 ile 7 arasında bir sayı giriniz.");    }

    return 0;
}
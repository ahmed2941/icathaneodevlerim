#include <stdio.h>

int main()
{
    int gun;

    printf("Günün, haftanın kaçıncı günü olduğunu giriniz (1-7): ");
    scanf("%d", &gun);

    switch(gun)
    {
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: 
            printf("Hafta İçi");
            break;
        case 6: 
        case 7: 
            printf("Hafta Sonu");
            break;
        default: 
            printf("Geçersiz değer!... Lütfen 1 ile 7 arasında bir sayı giriniz.");    }

    return 0;
}
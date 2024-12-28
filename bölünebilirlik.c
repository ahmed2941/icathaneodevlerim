#include <stdio.h>

int main()
{
    int sayi;

   
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
 
   
    if((sayi % 5 == 0) && (sayi % 11 == 0))
    {
        printf("Sayı, hem 5'e hem de 11'e bölünebilmektedir.");
    }
    else
    {
        printf("Sayı, 5 veya 11 değerlerinden en az birine bölünememektedir.");
    }

    return 0;
}
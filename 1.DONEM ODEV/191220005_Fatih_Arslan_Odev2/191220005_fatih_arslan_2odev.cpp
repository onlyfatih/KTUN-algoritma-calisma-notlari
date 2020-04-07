#include <stdio.h>
#include <conio.h>
int main(void) {
    int i, hedefsayi;
    int miktar = 0;
    int toplam = 0;
    float ortalama;

    printf("Bir sayi giriniz: ");
    scanf("%d", &hedefsayi);

    for (i = 0; i < hedefsayi; i++)
    {
        if (i % 2 == 0)
        {
            toplam = toplam + i;
            miktar++;
        }
    }    

    ortalama = toplam / miktar;

    printf("------------------\n");
    printf("Toplamlari: %d\n", toplam);
    printf("------------------\n");
    printf("Ortalamalari: %.2f\n", ortalama);
    
    getch ();
    return 0;
}

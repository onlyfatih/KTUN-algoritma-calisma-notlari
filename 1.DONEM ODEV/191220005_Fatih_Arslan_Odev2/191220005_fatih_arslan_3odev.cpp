#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void) 
{
    int sayi1, sayi2, sayi3, sayi4;
    
    int teksayitoplami = 0;
    int teksayiartis = 0;
    float teksayiaritmetikortalama;

    double ciftsayicarpimi = 1;
    double ciftsayiartis = 0;
    float ciftsayigeometrikortalama;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    if (sayi1 % 2 == 1) {
        teksayitoplami = teksayitoplami + sayi1;
        teksayiartis++;
    } else if (sayi1 % 2 == 0) {
        ciftsayicarpimi = ciftsayicarpimi * sayi1;
        ciftsayiartis++;
    }    

    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if (sayi2 % 2 == 1) {
        teksayitoplami = teksayitoplami + sayi2;
        teksayiartis++;
    } else if (sayi2 % 2 == 0) {
        ciftsayicarpimi = ciftsayicarpimi * sayi2;
        ciftsayiartis++;
    }

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    if (sayi3 % 2 == 1) {
        teksayitoplami = teksayitoplami + sayi3;
        teksayiartis++;
    } else if (sayi3 % 2 == 0) {
        ciftsayicarpimi = ciftsayicarpimi * sayi3;
        ciftsayiartis++;
    }

    printf("Dorduncu sayiyi giriniz: ");
    scanf("%d", &sayi4);

    if (sayi4 % 2 == 1) {
        teksayitoplami = teksayitoplami + sayi4;
        teksayiartis++;
    } else if (sayi4 % 2 == 0) {
        ciftsayicarpimi = ciftsayicarpimi * sayi4;
        ciftsayiartis++;
    }

    teksayiaritmetikortalama = teksayitoplami / teksayiartis;

    ciftsayigeometrikortalama = pow(ciftsayicarpimi, 1/ciftsayiartis);

    printf("Tek olanlarin artitmetik ortalamasi: %.2f\n", teksayiaritmetikortalama);
    printf("Cift olanlarin geometrik ortalamasi: %.2f\n", ciftsayigeometrikortalama);
    
    getch ();
    return 0;
}

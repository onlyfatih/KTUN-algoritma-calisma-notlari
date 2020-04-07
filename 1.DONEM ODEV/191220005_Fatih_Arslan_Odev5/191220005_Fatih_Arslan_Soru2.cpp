#include<stdio.h>
#include<conio.h>
int basamak(int sayi) {
	int toplam = 0, kalan, gecicideger;
	gecicideger = sayi;
	while(gecicideger>0) {
		kalan = gecicideger % 10;
		gecicideger = gecicideger / 10;
		toplam = toplam + kalan;
	}
	return toplam;
}
int main() {
	int sayi;
	printf("sayi giriniz: ");
	scanf("%d", &sayi);
	printf("basamaklar toplami:%d", basamak(sayi));
}

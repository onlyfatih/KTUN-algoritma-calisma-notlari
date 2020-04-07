#include<stdio.h>

struct Kitap{
	
char isim[20];
int sene;
int numara;
float fiyat;
float gelir;

};
struct Birey{	
	char isim[20];
	struct Kitap kitap;	
}bireybilgi;

struct Birey bilgitopla (struct Birey bireybilgi) {
	struct Birey birey;
	printf("Kisi adini giriniz:");
	scanf("%s",&birey.isim);
	printf("Kitap adini giriniz:");
	scanf("%s",&birey.kitap.isim);
	printf("Kitap yilini giriniz:");
	scanf("%d",&birey.kitap.sene);
	printf("Kitap numarasini giriniz:");
	scanf("%d",&birey.kitap.numara);
	printf("Kitap fiyatini giriniz:");
	scanf("%f",&birey.kitap.fiyat);
	printf("Kitap kazancini giriniz:");
	scanf("%f",&birey.kitap.gelir);
	return birey;
}

int main()
{
	struct Birey birey;
	birey = bilgitopla(birey);
	printf("%s\n",birey.isim);
	printf("%s\n",birey.kitap.isim);
	printf("%d\n",birey.kitap.sene);
	printf("%d\n",birey.kitap.numara);
	printf("%.2f\n",birey.kitap.fiyat);
	printf("%.2f\n",birey.kitap.gelir);
}


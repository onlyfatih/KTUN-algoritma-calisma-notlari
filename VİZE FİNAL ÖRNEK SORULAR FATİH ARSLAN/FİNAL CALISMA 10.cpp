#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* bir hava yolu �irketi yolcular� i�in bagaj s�n�rlamas� uygulamaktad�r. Her yolcunun el i�in 8 normal i�in 15 kg bagaj hakk� vard�r.
E�er yolcular el haklar�n� ge�erse kg ba��na 4tl normal haklar�n� ge�erlerse kg ba��na 5 tl �cret �demektedirler. buna g�re klavyeden
girilen el ve normal kg a��rl�klar� ile �denecek tutar� hesaplay�n�z. (el ve normal haklar� kg de�eri olmas� gerekenin alt�nda girilirse -
de�il 0 olarak verilecek */
int main ()
{
	int elkg , normalkg ;
	int odenecektutar;
	
	printf("lutfen el bagaj agirligini giriniz:");
	scanf("%d" , &elkg);
	
	printf("lutfen normal bagaj agirligini giriniz:");
	scanf("%d" , &normalkg);
	
	if (elkg > 8 && normalkg > 15)
	{
		odenecektutar=(elkg-8)*4 + (normalkg-15)*5;
		printf("%d tl odemeniz var" , odenecektutar);
	}
	else if (elkg <= 8 && normalkg > 15)
	{
		odenecektutar=(normalkg-15)*5;
		printf("%d tl odemeniz var" , odenecektutar);
	}
	else if (elkg > 8 && normalkg <= 15)
	{
		odenecektutar=(elkg-8)*4;
		printf("%d tl odemeniz var" , odenecektutar);
	}
	else
	{
		printf("odenecek tutar yok");
	}
}

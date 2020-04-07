#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* klavyeden birbirinden farklý 2 sayý girilmesini saðlayan ve bu 2 sayý arasýndaki ( bu 2 sayý dahil ) tam sayýlarýn toplamýný hesaplayýp
ekrana yazdýran komutu yazýnýz. */
int main ()
{
	int sayi1 , sayi2 , buyuk , kucuk;
	int toplam = 0;
	
	yeniden:
	printf("1.sayiyi giriniz:");
	scanf("%d" , &sayi1);
	
	printf("2.sayiyi giriniz:");
	scanf("%d" , &sayi2);
	
	if (sayi1 == sayi2)
	{
		goto yeniden;
	}
	else
	{
		if (sayi1>sayi2)
		{
			buyuk=sayi1;
			kucuk=sayi2;
		}
		else
		{
			buyuk=sayi2;
			kucuk=sayi1;
		}
	}
	
	for (kucuk ; kucuk<=buyuk ; kucuk++)
	{
		toplam=toplam+kucuk;
	}
	printf("%d" , toplam);
}

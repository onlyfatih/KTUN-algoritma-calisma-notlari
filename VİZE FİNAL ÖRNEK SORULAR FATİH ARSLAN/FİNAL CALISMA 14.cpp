#include<stdio.h>
#include<conio.h>
#include<math.h>
/* 2 sayýnýn en büyük ortak bölenini bulan program */
int main ()
{
	int sayi1 , sayi2 , buyuksayi , kucuksayi,sonuc;
	
	printf("lutfen bir sayi giriniz:");
	scanf("%d" , &sayi1);
	
	printf("lutfen bir sayi giriniz:");
	scanf("%d" , &sayi2);
	
	if (sayi1>sayi2)
	{
		kucuksayi=sayi2;
	}
	else 
	{
		kucuksayi=sayi1;
	}
	
	for (int i=2 ; i<=kucuksayi ; i++)
	{
		if(sayi1%i==0 && sayi2%i==0)
			sonuc=i;
	}
	printf("%d" , sonuc);
}

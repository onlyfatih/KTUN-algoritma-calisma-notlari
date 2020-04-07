#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int func(int sayi)
{	
	int toplam=0 , toplam1=0;
	for (int i=0 ; i<=sayi ; i++)
	{
		if (i%2 == 0)
		toplam=toplam+i;
		else
		toplam1=toplam1+i;
	}
	printf("ciftsayi top:%d , teksayitop:%d" , toplam , toplam1);
	
}
int main()
{
	int sayi , sonuc;
	printf("lutfen bir sayi giriniz:");
	scanf("%d" , &sayi);
	sonuc=func(sayi);
}

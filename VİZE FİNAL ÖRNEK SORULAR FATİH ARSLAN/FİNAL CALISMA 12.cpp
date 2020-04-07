#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* Heybeliadada bulunan bir yazýlým kampýnda kýþ mevsiminde 320 kiþi kalmýþtýr. Ýlkbahar da kýþ mevsiminin dörtte biri,yaz mevsiminde 
ilk baharýn 8 katý ve sonbaharda yazýn 10da biri kadar kiþi kaldýðýna göre bu otelde 1 yýlda toplam kaç kiþi kalmýþtýr? */
int main ()
{
	int ilkbahar , yaz , sonbahar , kis=320;
	int toplam=0;
	
	ilkbahar=kis/4;
	yaz=kis*2;
	sonbahar=kis/5;
	
	toplam=ilkbahar+yaz+kis+sonbahar;
	printf("%d" , toplam);
} 

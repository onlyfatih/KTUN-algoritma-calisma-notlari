#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* klavyeden girilen 3 basamaklý sayýnýn rakamlarýnýn toplamýný bulan program kodu*/
int main ()
{
	int a,b,c,sayi,toplam=0;
	
	yeniden:
	printf("lutfen bir sayi giriniz:");
	scanf("%d" , &sayi);

	if(sayi<100 && sayi>999)
	{
		goto yeniden;
	}
		
	a=sayi/100;
	b=(sayi/10)%10;
	c=sayi%10;
	
	toplam=a+b+c;
	printf("%d" , toplam);
}

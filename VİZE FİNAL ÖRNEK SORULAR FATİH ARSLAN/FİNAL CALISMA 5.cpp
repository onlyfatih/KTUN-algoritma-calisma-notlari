#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// klavyeden 4 tane tam sayi alip bunlarýn toplamini bulan programý kodlayýn //
int main ()
{
	int sayi1,sayi2,sayi3,sayi4;
	int toplam=0;

	printf("bir sayi giriniz:");
	scanf("%d" , &sayi1);
	
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi2);
	
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi3);
	
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi4);
	
	toplam=sayi1+sayi2+sayi3+sayi4;
	
	printf("sayilarin toplami:%d" , toplam);
	
}

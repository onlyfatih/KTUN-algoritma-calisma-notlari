#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int faktoriyel (int sayi)
 
 {
 	int toplam=1;
 	for (int i=1; i<=sayi ; i++)
 	{	
 		toplam = toplam*i;
	}
	return toplam;
 }
 
 int denklem (int sayi1 , int sayi2)
 {
 	int sonuc = faktoriyel(sayi1) / (faktoriyel(sayi1 - sayi2)*faktoriyel(sayi2));
 	return sonuc;
 }
 
 int main ()
 {
 	int sayi1,sayi2;
 	
 	printf("birinci sayiyi giriniz:");
 	scanf("%d" , &sayi1);
 	
 	printf("ikinci sayiyi giriniz:");
 	scanf("%d" , &sayi2);
 	
 	printf("%d" , denklem(sayi1,sayi2));
 }
 
 

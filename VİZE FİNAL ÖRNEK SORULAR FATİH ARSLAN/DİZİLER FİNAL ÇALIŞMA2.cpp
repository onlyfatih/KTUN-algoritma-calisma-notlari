#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
	int sayi;
	printf("kac ogrenci ismi gireceksiniz:");
	scanf("%d" , &sayi);
	char isim[sayi][15];
	int no[sayi];
	
	for (int i=0 ; i<sayi ; i++)
	{
		printf("%d. ogrencinin ismini giriniz:" , i+1);
		scanf("%s" , &isim[i]);
	}
	for (int j=0 ; j<sayi ; j++)
	{
		printf("%d. ogrencinin numarasini giriniz:" , j+1);
		scanf("%d" , &no[j]);
	}
	for (int t=0 ; t<sayi ; t++)
	{
		printf("\n%d. ogrencinin ismi:%s no:%d" , t+1 , isim[t] , no[t]);
	}
	getch();
}

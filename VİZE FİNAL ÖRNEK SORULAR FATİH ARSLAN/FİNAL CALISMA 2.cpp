#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// klavyeden girilen say�n�n tam b�lenlerini bulan program //
int main ()
{
	int sayi;
	int sayac=0;
	
	printf("sayi girin:");
	scanf("%d" , &sayi);
	
	for (int i=1 ; i<=sayi ; i++)
	{
		if (sayi % i == 0)
		{
			printf("%d " , i);
			sayac++;
		}
	}
	printf("\n%d tane tam boleni var." , sayac);
}

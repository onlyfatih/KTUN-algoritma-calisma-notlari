#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// klavyeden 0 girilene kadar olan sayýlarýn toplamý //
int main()
{
	int sayi;
	int toplam=0;
		
	while(sayi != 0)
	{
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	toplam=toplam+sayi;
	}
	printf("%d" , toplam);
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// klavyeden 4 tane tam sayi alip bunlar�n toplamini bulan program� kodlay�n //
int main ()
{
	int sayi;
	int toplam=0;
	
	for (int i=1 ; i<=4 ;i++)
	{
		printf("%d.sayiyi giriniz:" , i);
		scanf("%d" , sayi);
	}
	toplam=toplam+sayi;
	printf("%d",toplam);
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* bir hava yolu þirketi yolcularý için bagaj sýnýrlamasý uygulamaktadýr. Her yolcunun el için 8 normal için 15 kg bagaj hakký vardýr.
Eðer yolcular el haklarýný geçerse kg baþýna 4tl normal haklarýný geçerlerse kg baþýna 5 tl ücret ödemektedirler. buna göre klavyeden
girilen el ve normal kg aðýrlýklarý ile ödenecek tutarý hesaplayýnýz. (el ve normal haklarý kg deðeri olmasý gerekenin altýnda girilirse -
deðil 0 olarak verilecek */
int main ()
{
	int elkg , normalkg ;
	int odenecektutar;
	
	printf("lutfen el bagaj agirligini giriniz:");
	scanf("%d" , &elkg);
	
	printf("lutfen normal bagaj agirligini giriniz:");
	scanf("%d" , &normalkg);
	
	if (elkg > 8 && normalkg > 15)
	{
		odenecektutar=(elkg-8)*4 + (normalkg-15)*5;
		printf("%d tl odemeniz var" , odenecektutar);
	}
	else if (elkg <= 8 && normalkg > 15)
	{
		odenecektutar=(normalkg-15)*5;
		printf("%d tl odemeniz var" , odenecektutar);
	}
	else if (elkg > 8 && normalkg <= 15)
	{
		odenecektutar=(elkg-8)*4;
		printf("%d tl odemeniz var" , odenecektutar);
	}
	else
	{
		printf("odenecek tutar yok");
	}
}

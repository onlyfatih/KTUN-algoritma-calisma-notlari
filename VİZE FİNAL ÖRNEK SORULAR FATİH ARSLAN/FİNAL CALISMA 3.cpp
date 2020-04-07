#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// klavyeden girilen sayinin k�p�n�n al�nmas� //
int kup(int sayi)
{
	int kup=sayi*sayi*sayi;
}

int main ()
{
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("sayinin kupu:%d" , kup(sayi));
}

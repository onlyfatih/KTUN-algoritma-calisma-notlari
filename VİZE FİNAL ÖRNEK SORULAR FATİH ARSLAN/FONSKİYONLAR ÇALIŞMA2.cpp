#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int alan(int kisa , int uzun)
{
	int alan;
	alan=kisa*uzun;
	return alan;
}
int main ()
{
	int kisa , uzun , sonuc ;
	
	printf("lutfen diktorgenin kisa kenarini giriniz:");
	scanf("%d" , &kisa);
	
	printf("lutfen diktorgenin uzun kenarini giriniz:");
	scanf("%d" , &uzun);
	
	sonuc=alan(kisa,uzun);
	printf("%d" , sonuc);
	
}

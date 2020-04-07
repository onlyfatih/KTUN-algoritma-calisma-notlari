#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void kup(int a)
{
	int sonuc;
	sonuc = a*a*a;
	printf("sayinin kupu:%d" , sonuc);
}
int main()
{
	int sayi;
	printf("lutfen kupu alinacak sayiyi giriniz:");
	scanf("%d" , &sayi);
	
	kup(sayi);
	
	getch ();
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main (void)
{
	int sayi1;
	int sayi2;
	printf("lutfen iki sayi giriniz:\n");
	scanf("%d %d" , &sayi1 , &sayi2);
	if (sayi1>sayi2) printf("%d sayisi,%d sayisinden daha buyuktur." ,sayi1 ,sayi2);
	else if (sayi1==sayi2) printf("%d iki sayi birbirine esittir.");
	else printf("%d sayisi, %d sayisindan daha buyuktur.\n" ,sayi2 ,sayi1);
	getch ();
	return(0);
}

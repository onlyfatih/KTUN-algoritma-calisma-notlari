#include<stdio.h>
#include<conio.h>
int main (void)
{
	int integer1;
	int integer2;
	int toplama;
	int cikarma;
	int carpma;
	float bolme;
	printf("lutfen iki sayi giriniz:\n");
	scanf("%d %d" , &integer1 , &integer2);
	toplama = integer1+integer2;
	cikarma = integer1-integer2;
	carpma = (float)integer1*integer2;
	bolme = (float)integer1/integer2;
	printf("toplama sonucu: %d\n" , toplama);
	printf("cikarma sonucu: %d\n" , cikarma);
	printf("carpma sonucu: %d\n" , carpma);
	printf("bolme sonucu: %0.2f\n" , bolme);
	
	getch ();
	return(0);
	
	
	
}

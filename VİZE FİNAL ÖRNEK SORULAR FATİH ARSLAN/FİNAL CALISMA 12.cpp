#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* Heybeliadada bulunan bir yaz�l�m kamp�nda k�� mevsiminde 320 ki�i kalm��t�r. �lkbahar da k�� mevsiminin d�rtte biri,yaz mevsiminde 
ilk bahar�n 8 kat� ve sonbaharda yaz�n 10da biri kadar ki�i kald���na g�re bu otelde 1 y�lda toplam ka� ki�i kalm��t�r? */
int main ()
{
	int ilkbahar , yaz , sonbahar , kis=320;
	int toplam=0;
	
	ilkbahar=kis/4;
	yaz=kis*2;
	sonbahar=kis/5;
	
	toplam=ilkbahar+yaz+kis+sonbahar;
	printf("%d" , toplam);
} 

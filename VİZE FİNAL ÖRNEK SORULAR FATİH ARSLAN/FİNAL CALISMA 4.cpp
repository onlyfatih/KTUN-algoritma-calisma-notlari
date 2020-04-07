#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// bir bakteri türü her saat baþý kendini ikiye bölerek çoðalmaktadýr. Bu laboratuarda 24 saat sonunda kaç bakteri olur? //
int main ()
{
	int sayi=1;
	for(int i=1 ; i<=24 ; i++)
	{
		sayi=sayi*2;
	}
	printf("%d" , sayi);
}

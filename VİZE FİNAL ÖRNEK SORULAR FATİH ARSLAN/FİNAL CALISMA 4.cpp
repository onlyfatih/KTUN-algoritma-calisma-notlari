#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// bir bakteri t�r� her saat ba�� kendini ikiye b�lerek �o�almaktad�r. Bu laboratuarda 24 saat sonunda ka� bakteri olur? //
int main ()
{
	int sayi=1;
	for(int i=1 ; i<=24 ; i++)
	{
		sayi=sayi*2;
	}
	printf("%d" , sayi);
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// 1+5+9+13+..+81 dizisinin toplamýný bulan programýn kodu //
int main ()
{
	int toplam=0;
	for (int i=1 ; i<=81 ; i+=4)
	{
		toplam=toplam+i;
	}
	printf("%d" , toplam);
}

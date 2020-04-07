#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* bir otoparkta ücretlendirme sistemi þekildeki gibidir;
0-4 saat 10tl
5-8 saat 12tl
9-12 saat 15tl
13++ saat 20tl
klavyeden girilen otoparkta kalma süresi ile ücretlendirme*/
int main ()
{
	int sure;
	int toplam;
	
	printf("otoparkta kalinan sure:");
	scanf("%d" , &sure);
	
	if (1<= sure && 4>= sure)
	{
		toplam=sure*10;
		printf("%d tl ucret odenecek." , toplam);
	}
	else if (5<=sure && 8>= sure)
	{
		toplam=40+(sure-4)*12;
		printf("%d tl ucret odenecek." , toplam);
	}
	else if (9<=sure && 12>= sure)
	{
		toplam=88+(sure-8)*15;
		printf("%d tl ucret odenecek." , toplam);
	}
	else if (13 <= sure)
	{
		toplam=148+(sure-12)*20;
		printf("%d tl ucret odenecek." , toplam);
	}
	return 0;
}


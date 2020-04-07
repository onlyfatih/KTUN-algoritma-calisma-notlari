#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// 3 basamaklı rakamları birbirinden farklı kaç sayı vardır? //
int main ()
{
	int sayac=0;
	int a,b,c;
	
	for (int i=100 ; i<=999 ; i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;		
		if (a!=b && a!=c && b!=c)
		{
			sayac++;
		}
	}
	printf("%d" , sayac);
}

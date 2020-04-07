#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// klavyeden taban sayýsý girilen dik üçgeni(*) sembolü ile çzidiren program //
int main ()
{
int sayi;

printf("bir sayi giriniz:");
scanf("%d" , &sayi); 

	for (int i=0 ; i<sayi ; i++)
	{
		for (int j=0 ; j<=i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

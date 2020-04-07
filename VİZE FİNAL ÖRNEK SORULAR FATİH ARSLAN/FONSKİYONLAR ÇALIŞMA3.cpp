#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sekil(int sayi)
{
	for (int i=0 ; i<sayi ; i++)
	{	
		for (int j=0 ; j<sayi ; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
		
}
int main()
{
	int sayi,sonuc;
	
	printf("karenin kenar uzunlugunu yaz:");
	scanf("%d" , &sayi);
	
	sonuc=sekil(sayi);
}

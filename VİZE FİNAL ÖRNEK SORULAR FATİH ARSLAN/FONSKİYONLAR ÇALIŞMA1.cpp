#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void faktoriyel(int sayi)
{
	int a=1;
	for (int i=1 ; i<=sayi ; i++)
	{
		a=a*i;
	}
	printf("faktoriyeli:%d" , a);
}
int main()
{
	int sayi;
	
	printf("lutfen faktoriyeli alinacak sayiyi giriniz:");
	scanf("%d" , &sayi);
	
	faktoriyel(sayi);
}

#include<stdio.h>
// * ile þekil oluþturma //
int main ()
{
	int bosluk , yildiz=1;
	int taban;

	printf("lutfen taban uzunlugunu giriniz:");
	scanf("%d" , &taban);
	
	bosluk=taban-1;
	
	for (int i=0 ; i<taban ; i++)
	{
		for (int j=0 ; j<bosluk ; j++)
		{
			printf(" ");
		}
		for (int l=0 ; l<yildiz ; l++)
		{
			printf("*");
		}
	printf("\n");
	bosluk--;
	yildiz=yildiz+2;
	}
	bosluk=1;
	yildiz=yildiz-4;
		for (int i=0 ; i<taban ; i++)
	{
		for (int j=0 ; j<bosluk ; j++)
		{
			printf(" ");
		}
		for (int l=0 ; l<yildiz ; l++)
		{
			printf("*");
		}
	printf("\n");
	bosluk++;
	yildiz=yildiz-2;

	}
}

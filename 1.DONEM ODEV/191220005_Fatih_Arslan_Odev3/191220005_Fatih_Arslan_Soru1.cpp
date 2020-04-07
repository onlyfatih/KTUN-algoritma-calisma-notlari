#include<stdio.h>
#include<conio.h>
int main()
{
	int satir1,sutun1,sutun2,toplam,i,j,k=0;
	
	printf("1. matrisin satir degerini giriniz:");
	scanf("%d" , &satir1);
	printf("1. matrisin sutun degerini giriniz:");
	scanf("%d" , &sutun1);
	printf("2. matrisin sutun degerini giriniz:");
	scanf("%d" , &sutun2);
	
	
	int dizi1[satir1][sutun1] , dizi2[sutun1][sutun2] , diziCarp[satir1][sutun2];
	
	for (i=0 ; i<satir1 ; i++)
	{
		for (j=0 ; j<sutun1 ; j++)
		{
			printf("%dx%d sayisini giriniz:" , i+1 , j+1);
			scanf("%d" , &dizi1[i][j]);
		}
	} 
	printf("\n");
	
	for (i=0 ; i<sutun1 ; i++)
	{
		for (j=0 ; j<sutun2 ; j++)
		{
			printf("%dx%d sayisini giriniz:" , i+1 , j+1);
			scanf("%d" , &dizi2[i][j]);
		}
	} 
	printf("\n");
	
	for (i=0 ; i<satir1 ; i++)
	{
		for (j=0 ; j<sutun1 ; j++)
		{
			for (k=0 ; k<sutun2 ; k++)
			{
				toplam += dizi1[i][j]*dizi2[j][k];
			}
			diziCarp[i][j]=toplam;
			toplam=0;
			printf("%d " , diziCarp[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	getch ();
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
	int matris[3][3];
	
	for (int i=0 ; i<3 ; i++)
		for (int j=0 ; j<3 ; j++)
		{
			printf("%d.satir ve %d.sutunun degerini giriniz:" , i+1 , j+1);
			scanf("%d" ,&matris[i][j]);
		}
	printf("\n TUM ELEMANAR\n");
	for (int i=0 ; i<3 ; i++)
		for (int j=0 ; j<3 ; j++)
		{
			printf("%d.satir %d. sutun = %d\n" , i+1 , j+1 , matris[i][j]);			
		}
	for (int i=0 ; i<3 ; i++)
		for (int j=0 ; j<3 ; j++)
		{
			if (matris[i][j] > 5)
			{
				printf("%d.satir %d.sutunun elemani (%d) 5ten buyuktur\n" , i+1 , j+1 , matris[i][j]);
			}
		}
	getch ();
}

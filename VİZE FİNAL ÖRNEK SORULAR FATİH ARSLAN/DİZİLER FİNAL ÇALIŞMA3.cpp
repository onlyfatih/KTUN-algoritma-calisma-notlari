#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
	int satir;
	int sutun;
	printf("lutfen toplayacaginiz 2 matrisin satir ve sutun sayisini giriniz:");
	scanf("%d %d" , &satir , &sutun);
	int matris[satir][sutun];
	int matris1[satir][sutun];
	int matrisonuc[satir][sutun];

	for (int i=0 ; i<satir ; i++)
		for (int j=0 ; j<sutun ; j++)
		{
			printf("%d.satir %d.sutun degerini giriniz:" ,i+1 ,j+1);
			scanf("%d" , &matris[i][j]);
		}
	
	for (int i=0 ; i<satir ; i++)
		for (int j=0 ; j<sutun ; j++)
		{
			printf("%d.satir %d.sutun degerini giriniz:" ,i+1 ,j+1);
			scanf("%d" , &matris1[i][j]);
		}
		
	for (int i=0 ; i<satir ; i++)
		for (int j=0 ; j<sutun ; j++)
		{
			matrisonuc[i][j] = matris[i][j] + matris1[i][j];
		}
	
	printf("\nMATRISLERIN TOPLAMI\n");
	
		
	for (int i=0 ; i<satir ; i++)
		for (int j=0 ; j<sutun ; j++)
		{
			printf ("%d " , matrisonuc[i][j]);
		}
	printf("\n"); // yan yana basiyor!!
}

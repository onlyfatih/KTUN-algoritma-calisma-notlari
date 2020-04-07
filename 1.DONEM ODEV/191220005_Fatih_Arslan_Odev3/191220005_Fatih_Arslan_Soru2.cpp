#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	int matris[10][10];
	srand(time(NULL));
	for (int i=0 ; i<10 ; i++)
	{
		for (int j=0 ; j<10 ; j++)
		{
			matris[i][j]=rand()%10; //random gelecek sayi araligi duzenlenebilir
			printf(" %d" , matris[i][j]);
		}
		printf("\n");
	}
	int kontrol=1 , toplam=0;
	for (int i=0 ; i<10 ; i++)
	{
		for (int j=0 ; j<10 ; j++)
		{	
			for (int sayac=matris[i][j] ; sayac<=matris[i][j] ; sayac++)
			{
				kontrol=1;
				for (int l=2 ; l<= sayac/2 ; l++)
				{
					if(sayac % l==0)
					{
						kontrol=0;
						break;
					}
				}
				if(kontrol==1 && sayac>=2)
				{
					toplam=toplam+sayac;
				}
			}
		}
	}
printf("toplam: %d" , toplam);
getch ();
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{
	FILE*klasor1;
	FILE*klasor;
	klasor=fopen("sayilar.txt" , "r"); 
	klasor1=fopen("sayilar2.txt" , "w");
	
	int sayi,kontrol;
	while(!feof(klasor))
	{
	fscanf(klasor, "%d", &sayi);
	
	for (int i=2 ; i<=sayi/2 ; i++)
	{
		kontrol=0;
		if((sayi%i)==0)
		{
			kontrol++;
			break;
		}
	}
	if(kontrol==0 && sayi>=2)
	{
		fprintf(klasor1,"%d\n", sayi);
	}
	}
	fclose(klasor);
	fclose(klasor1);
}

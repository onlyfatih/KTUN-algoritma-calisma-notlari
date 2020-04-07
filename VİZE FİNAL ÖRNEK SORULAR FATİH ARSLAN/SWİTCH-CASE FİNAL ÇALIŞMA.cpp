#include<stdio.h>
int main()
{
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	switch (sayi)
	{
		case 1: for (int i=1 ; i<=100 ; i++)
				printf("%d " , i);
		break;
		default: printf("hatali sayi girdiniz");
		break;
	}
	return 0;
}

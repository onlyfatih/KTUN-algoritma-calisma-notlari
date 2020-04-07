#include<stdio.h>
void armstrong(int sayi1)
{
	int toplam,a,b,c;
	a=(sayi1/100);
	b=((sayi1/10)%10);
	c=sayi1%10;
	
	toplam=a*a*a+b*b*b+c*c*c;
	if(sayi1==toplam)
	{
		printf("armstrong");
	}
	else
	printf("armstrong degildir");
	
}
int main()
{
	int sayi1;
	printf("lutfen sayi gir:");
	scanf("%d" , &sayi1);
	
	armstrong(sayi1);
}

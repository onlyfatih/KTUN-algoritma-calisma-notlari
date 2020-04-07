#include<stdlib.h>
#include<stdio.h>

struct isci
{
	char ad[15];
	char soyad[20];
	int yas;
	int maas;
};

struct isci bilgi;

int main ()
{
	printf("iscinin adi:");
	scanf("%s" , &bilgi.ad);
	
	printf("iscinin soyadi:");
	scanf("%s" , &bilgi.soyad);
	
	printf("iscinin yasi:");
	scanf("%d" , &bilgi.yas);
	
	printf("iscinin maasi:");
	scanf("%d" , &bilgi.maas);
	
	printf("%s\n" , bilgi.ad);
	printf("%s\n" , bilgi.soyad);
	printf("%d\n" , bilgi.yas);
	printf("%d\n" , bilgi.maas);
	
	return 0;	
}


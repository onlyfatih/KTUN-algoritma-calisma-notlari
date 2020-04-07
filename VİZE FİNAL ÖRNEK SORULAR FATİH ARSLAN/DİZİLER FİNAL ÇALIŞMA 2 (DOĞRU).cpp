#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Kac ogrenci gireceksiniz>>>"); scanf("%d",&a);
	char isim[a][15];
	int numara[a];
	for(int i=0;i<a;i++){
		printf("%d. Ogrencinin adini giriniz>>>",i+1);scanf("%s",&isim[i]);
		printf("%d. Ogrencinin numarasini giriniz>>>",i+1);scanf("%d",&numara[i]);
		printf("\n");
	}
	for(int j=0;j<a;j++){
		printf("%d. Ogrencinin adi:%s\n",j+1,isim[j]);
		printf("%d.Ogrencinin numarasi:%d",j+1,numara[j]);printf("\n");
	}
	getch();
	return 0;
	
}

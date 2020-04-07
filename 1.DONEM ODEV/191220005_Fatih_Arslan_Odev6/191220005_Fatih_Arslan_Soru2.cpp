#include <stdio.h>

struct ogrenci {
	char ismi[20];
	char soyadi[20];
	int no;
	struct ders{
		int kod;
		int vize;
		int final;
		float ort;
	}ders[4];
}ogrenci[4];

int main()
{
	int gecmenotu=50;
	for (int i=0; i<5; i++)
	{
		printf("ogrencinin adini giriniz:");
		scanf("%s",&ogrenci[i].ismi);
		printf("ogrencinin soyadini giriniz:");
		scanf("%s",&ogrenci[i].soyadi);
		printf("ogrencinin okul numarasini giriniz:");
		scanf("%d",&ogrenci[i].no);	
		for (int j=0; j<5; j++)
		{
		printf("%d. dersin ders kodunu giriniz:",j+1);
		scanf("%d",&ogrenci[i].ders[j].kod);
		printf("%d. dersin vize notunu giriniz:",j+1);
		scanf("%d",&ogrenci[i].ders[j].vize);
		printf("%d. dersin final notunu giriniz:",j+1);
		scanf("%d",&ogrenci[i].ders[j].final);
		ogrenci[i].ders[j].ort = (float) (ogrenci[i].ders[j].vize * 0.4) + (ogrenci[i].ders[j].final * 0.6);
		}
		printf("\n%d. Ogrencinin Bilgileri:\n",i+1);
		printf("Ismi: %s\nSoyadi: %s\nNo: %d \nGECME NOTU:50 VE UZERI",ogrenci[i].ismi,ogrenci[i].soyadi,ogrenci[i].no);
		printf("\n");
		printf("\n%d. Ogrencinin Ders Bilgileri:\n",i+1);
		for (int j=0; j<5; j++)
		{
		printf("%d. Ders Kod: %d\n%d. Ders Vize: %d\n%d. Ders Final: %d\n%d. Ders Ortalama: %0.2f\n",j+1,ogrenci[i].ders[j].kod,j+1,ogrenci[i].ders[j].vize,j+1,ogrenci[i].ders[j].final,j+1,ogrenci[i].ders[j].ort);
		printf("\n");
		}
	}

}

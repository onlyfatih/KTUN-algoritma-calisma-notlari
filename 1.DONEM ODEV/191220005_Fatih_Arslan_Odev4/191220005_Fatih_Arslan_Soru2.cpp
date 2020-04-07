#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
int main() {
	char cumle[100],kelime[30];
	
	int kontrol = 1, k, sonindex,kelimekontrol=0;
	
	int strLen, wordLen, x, y;
	
	printf("Lutfen bir cumle giriniz: ");
	gets(cumle);
	
	printf("Aramak istediginiz kelimeyi giriniz: ");
	gets(kelime);
	
	for(x = 0; cumle[x] != '\0'; ++x);
	for(y = 0; kelime[y] != '\0'; ++y);
	
	strLen = x;
	wordLen = y;
	
	for (int i = 0; i < strLen; i++) {
		if (cumle[i] == kelime[0]) {
			kelimekontrol = 0;	
			k = i;
			for (int j = 0; j < wordLen; j++) {
				if (cumle[k] == kelime[j]) {
					kelimekontrol++;
				}	
				sonindex = i + j;
				k++;
			}
			if(wordLen == kelimekontrol) {
				kontrol = 1;
				printf("%d. indexten basliyor! %d. indexte bitiyor!\n", i, sonindex);
			}
		}
	}
	if( kontrol == 0) {
		printf("Metin icinde aranan kelime bulunamadi!");
	}
}

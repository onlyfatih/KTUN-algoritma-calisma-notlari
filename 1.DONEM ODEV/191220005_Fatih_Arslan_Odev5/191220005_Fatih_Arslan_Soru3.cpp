#include<stdio.h>
#include<conio.h>
char asal(int sayi) 
{
	int kontrol = 0;
	if(sayi==1) 
	{
		kontrol = 0;	
	}
	else {
		if(sayi > 1) 
		{
			for(int i = 2; i < sayi; i++) 
			{
				if(sayi % i == 0) {
					kontrol = 1;
					break;
				}
			}
			if(kontrol == 1){
				return 'h';
			}
			else{
				return 'e';
			}
		}
	}
}
int main() {
	int sayi;
	printf("lutfen sayi giriniz:");
	scanf("%d", &sayi);
	if (asal(sayi) == 'e')
		printf("sayi asaldir.");
	else 
		printf("sayi asal degildir.");
		
	getch ();
	return 0;
}

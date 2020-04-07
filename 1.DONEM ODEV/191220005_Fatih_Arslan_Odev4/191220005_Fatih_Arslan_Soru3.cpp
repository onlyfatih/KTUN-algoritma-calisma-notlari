#include<stdio.h>
#include<conio.h>
int main() 
{
	char cumle[100];
	int fark;
	printf("Lutfen bir cumle giriniz: ");
	gets(cumle);
	fark = 'f' - 'F';
	for(int i = 0; cumle[i] != '\0'; i++) 
	{
		if(cumle[i] >= 'A' && cumle [i] <= 'Z') 
		{
			cumle[i] += fark;
		}
		else if(cumle[i] >= 'a' && cumle[i] <= 'z') 
		{
			cumle[i] -= fark;
		}
		printf("%c", cumle[i]);
	}
	return 0;
}

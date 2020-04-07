#include <stdio.h>

int main ()
{
	char cumle[50];
	int i, space = 0;

	printf("Cumle girin:\n");
	gets(cumle);
	for (i = 0; cumle[i] != '\0'; i++)
	{
		if (cumle[i] == ' ' && cumle[i - 1] != ' ' )
		{
			space++;
		}
	}
	printf("Cumledeki kelime sayisi:%d\n", space + 1);
	
	return 0;
}


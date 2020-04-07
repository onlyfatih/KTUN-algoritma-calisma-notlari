#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main ()
{
	FILE*klasor;
	klasor=fopen("sayilar.txt" , "w"); 
	
	if (klasor == NULL) 
	{
      printf("Dosya açma hatasi!");
      getch();
      return 0;
	}
	
	int rastgele; 
	srand(time(NULL));
	
	for(int i=0 ; i<100 ; i++)
	{
		rastgele=rand()%1000;
		fprintf(klasor,"%d\n", rastgele);
	}
	fclose(klasor);
}

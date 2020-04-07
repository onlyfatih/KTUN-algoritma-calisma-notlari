#include<stdio.h>
#include<conio.h>
int main (void)
{  
    int s1,s2,s3;
	float bol;
	printf("lutfen uc sayi giriniz:");
	scanf("\n%d %d %d", &s1,&s2,&s3);
	bol = (float)(s1+s2+s3)/(3);
	printf("uc sayinin aritmetik ortalamasi: %0.1f\n",bol);
	printf("iyi calismalar..\n");
	getch ();
	return(0);
}
	
	
	
	

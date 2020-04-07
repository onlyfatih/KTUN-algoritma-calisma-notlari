#include <stdio.h>
#include <conio.h>
int main(void) 
{
    float vize, final, but, gecmenotu;

    printf("Vize notunu giriniz: ");
    scanf("%f", &vize);

    printf("Final notunu giriniz: ");
    scanf("%f", &final);

    gecmenotu = (vize * 0.4) + (final * 0.6);

    if (gecmenotu >= 60)
    {
        printf("Dersi %.2f ortalama ile gectiniz\n", gecmenotu);
    } else
    {        
        printf("Ortalamaniz: %.2f Kaldiniz\n", gecmenotu);

        printf("But notunu giriniz: ");
        scanf("%f", &but);
        
        gecmenotu = (vize * 0.4) + (but * 0.6);

        if (gecmenotu >= 60)
        {
            printf("Dersi %.2f ortalama ile gectiniz\n", gecmenotu);
        } else
        {
            printf("Ortalamaniz: %.2f Kaldiniz\n", gecmenotu);
        }        
    }
    getch ();
    return 0;
}

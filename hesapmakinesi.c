#include <stdio.h>
#include <stdlib.h>

float islem(float a, float b, char i)
{
    if (i == '+')
    {
        return a+b;
    }
    else if (i=='-')
    {
        return a-b;
    }
    else if (i=='*')
    {
        return a*b;
    }
    else if (i=='/')
    {
        return a/b;
    }
    else
    {
        printf("Hatali operator girdiniz ");
    }
}
int main()
 {

    float a,b;
    char i;

    printf("Yapmak istediginiz islemi giriniz (+ - * /)\n");
    scanf("%c",&i);

    printf("Iki adet sayi giriniz\n");
    scanf("%f%f",&a,&b);

    printf("Isleminizin sonucu : %.2f",islem(a,b,i));


    return 0;
}
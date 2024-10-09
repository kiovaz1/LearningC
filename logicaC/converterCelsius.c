//Crie um programa que converta a temperatura de Fahrenheit para
//Celsius.
#include <stdio.h>
int main()
{
    
    double F ;
    
    printf("Insira a temperatura em Fahrenheit a converter: \n");
    scanf("%lf",&F);


    double calculoTemperatura = ((F-32) * 5) / 9 ;
    double Celsius = calculoTemperatura ;
    
    printf("A temperatura em Celsius e: %.2lf",Celsius);

    return 0;
}



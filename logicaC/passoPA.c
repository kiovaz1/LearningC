#include <stdio.h>
#include <math.h>
int main()
{
    int posicaoInicial;
    int posicaoDesejada;
    int distanciaPasso;
    
    
    printf("INSIRA SUA POSICAO INICIAL: ");
    scanf("%d", &posicaoInicial);
    
    printf("INSIRA SUA POSICAO DESEJADA: ");
    scanf("%d", &posicaoDesejada);
    
    printf("INSIRA A DISTANCIA DO SEU PASSO: ");
    scanf("%d", &distanciaPasso);

    double distancia = posicaoDesejada - posicaoInicial;
    double somaDistancia = 0;
    int n  = 0 ; // numero de passos dados
    while(somaDistancia < distancia){
        n++;
        somaDistancia += n * distanciaPasso ;
    }

    printf("A quantidade de passos necessarios e %d", n);



    return 0;
}

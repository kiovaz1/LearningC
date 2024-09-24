
#include <stdio.h>
#include <math.h>
int main()
{
    int posicaoInicial;
    int posicaoDesejada;
    int distanciaPasso;
    
    // Entrada de dados
    printf("INSIRA SUA POSICAO INICIAL: ");
    scanf("%d", &posicaoInicial);
    
    printf("INSIRA SUA POSICAO DESEJADA: ");
    scanf("%d", &posicaoDesejada);
    
    printf("INSIRA A DISTANCIA DO SEU PASSO: ");
    scanf("%d", &distanciaPasso);

    double distancia = posicaoDesejada - posicaoInicial;
    double passosNecessarios = ceil(distancia / distanciaPasso);

    
    printf("A quantidade de passos necessarios é %.0lf\n", passosNecessarios);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

void limparConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void calculoDistancia(float x1, float x2 , float y1 , float y2){
    float distanciaX ;
    distanciaX = x2 - x1 ;
    float distanciaY ;
    distanciaY = y2 - y1 ;

    printf("A distancia é: X --> %.2f e Y é --> %.2f",distanciaX,distanciaY);

}

int main()
{
    float x1;
    float x2;
    float y1;
    float y2;
    limparConsole();
    printf("Insira as coordenada X1:\n");
    scanf("%f",&x1);
    limparConsole();
    printf("Insira as coordenada Y1:\n");
    scanf("%f",&y1);
    limparConsole();
    printf("Insira as coordenada X2:\n");
    scanf("%f",&x2);
    limparConsole();
    printf("Insira as coordenada Y2:\n");
    scanf("%f",&y2);
    limparConsole();
    calculoDistancia(x1,x2,y1,y2);

    return 0;
}

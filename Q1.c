# include <stdio.h>
int main()
{
    int valor ; 
    float valorPorcentagem; 
    
    printf("Insira o valor inteiro: ");
    scanf("%d",&valor);
    
    printf("Insira a porcentagem a calcular: ");
    scanf("%f",&valorPorcentagem);
    
    float calculoPorcentagem = valorPorcentagem / 100 ; 
    
    
    float porcentagemFinal = valor * calculoPorcentagem ;
    printf("O resultado é: %f",porcentagemFinal);

    return 0;
}
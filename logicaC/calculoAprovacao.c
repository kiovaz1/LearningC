#include <stdio.h>

int main()
{
    double nota;
    int quantidadeDeProvas;
    double somaNotas = 0.0;

    printf("Quantidade de provas no semestre: \n");
    scanf("%d",&quantidadeDeProvas);
    
    for (int i = 1 ; i <= quantidadeDeProvas; i++){
        printf("Digite a nota da prova %d: \n", i);
        scanf("%lf", &nota);
        somaNotas += nota ;
        }

    float mediaFinal = somaNotas / quantidadeDeProvas ;

    if(mediaFinal >= 7){
        printf("Aprovado, sua media e %f\n", mediaFinal);

    }
    else{
        printf("Reprovado, sua media e %.2f, inferior a media\n", mediaFinal);
    }
    return 0;
}

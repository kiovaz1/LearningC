#include <stdio.h>
#include <stdlib.h>

void limparConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void sacarDinheiro(int valor) {
    int notas100, notas50, notas20, notas10;

    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas20 = valor / 20;
    valor = valor % 20;

    notas10 = valor / 10;

    if (notas100 > 0) {
        printf("Notas de 100: %d\n", notas100);
    }
    if (notas50 > 0) {
        printf("Notas de 50: %d\n", notas50);
    }
    if (notas20 > 0) {
        printf("Notas de 20: %d\n", notas20);
    }
    if (notas10 > 0) {
        printf("Notas de 10: %d\n", notas10);
    }
    if (notas100 == 0 && notas50 == 0 && notas20 == 0 && notas10 == 0) {
        printf("Valor não pode ser sacado com as notas disponíveis.\n");
    }
}

int main() {
    int continuar;
    
    do {
        limparConsole();
        int valor;

        printf("Quanto você desejaria sacar?\n");
        scanf("%d", &valor);
        limparConsole();
        if (valor <= 0) {
            printf("Por favor, insira um valor positivo.\n");
            continue;
        }

        if (valor % 10 != 0) {
            printf("Por favor, insira um valor que seja múltiplo de 10.\n");
            printf("Deseja tentar novamente? (1 - Sim, 0 - Não): ");
            scanf("%d", &continuar);
            if (continuar == 0) {
                break;
            }
            continue;
        }

        sacarDinheiro(valor);

        printf("\nDeseja realizar outro saque? (1 - Sim, 0 - Não): ");
        scanf("%d", &continuar);
        
    } while (continuar == 1);
    limparConsole();
    printf("Obrigado por usar o caixa eletrônico!\n");
    return 0;
}

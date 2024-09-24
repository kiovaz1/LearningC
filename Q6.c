#include <stdio.h>

int main() {
    int numeros[3];
    int temp;
    char continuar;

    do {
        
        for (int i = 0; i < 3; i++) {
            printf("Insira o numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }

        
        if (numeros[0] > numeros[1]) {
            temp = numeros[0];
            numeros[0] = numeros[1];
            numeros[1] = temp;
        }
        if (numeros[1] > numeros[2]) {
            temp = numeros[1];
            numeros[1] = numeros[2];
            numeros[2] = temp;
        }
        if (numeros[0] > numeros[1]) {
            temp = numeros[0];
            numeros[0] = numeros[1];
            numeros[1] = temp;
        }

        
        printf("A ordem dos numeros crescente é: %d, %d, %d.\n", numeros[0], numeros[1], numeros[2]);
        
        
        printf("Deseja inserir mais números? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
#include <stdio.h>

void geraRelatorioVendas(float vendas[], int tamanho) {
    float maiorVenda = vendas[0];
    int diaMaiorVenda = 1;

    for (int i = 1; i < tamanho; i++) {
        if (vendas[i] > maiorVenda) {
            maiorVenda = vendas[i];
            diaMaiorVenda = i + 1;
        }
    }

    printf("Maior venda: %.2f\n", maiorVenda);
    printf("Dia correspondente: %d\n", diaMaiorVenda);
}

int main() {
    float vendas[] = {1500.50, 2200.75, 1800.00, 2400.25, 3000.00};
    int tamanho = sizeof(vendas) / sizeof(vendas[0]);

    geraRelatorioVendas(vendas, tamanho);

    return 0;

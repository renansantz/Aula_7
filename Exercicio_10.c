#include <stdio.h>

#define DIAS 5

float calcularTotal(float vendas[], int tamanho) {
    float total = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        total += vendas[i];
    }

    return total;
}

float calcularMedia(float total, int quantidadeDias) {
    return total / quantidadeDias;
}

int contarVendasAcimaDaMedia(float vendas[], int tamanho, float media) {
    int contador = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        if (vendas[i] > media) {
            contador++;
        }
    }

    return contador;
}

int main() {
    float vendas[DIAS];
    float total, media;
    int acimaDaMedia, i;

    for (i = 0; i < DIAS; i++) {
        printf("Digite o valor das vendas do dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }

    total = calcularTotal(vendas, DIAS);
    media = calcularMedia(total, DIAS);
    acimaDaMedia = contarVendasAcimaDaMedia(vendas, DIAS, media);

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media diaria: R$ %.2f\n", media);
    printf("Dias com vendas acima da media: %d\n", acimaDaMedia);

    return 0;
}

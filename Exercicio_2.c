#include <stdio.h>

int calcularDobro(int numero) {
    return numero * 2;
}

int main() {
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = calcularDobro(n);

    printf("O dobro de %d é %d\n", n, resultado);

    return 0;
}

#include <stdio.h>

int ehPrimo(int numero) {
    int i;

    if (numero < 2) {
        return 0;
    }

    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPrimo(n) == 1) {
        printf("%d e primo\n", n);
    } else {
        printf("%d nao e primo\n", n);
    }

    return 0;
}

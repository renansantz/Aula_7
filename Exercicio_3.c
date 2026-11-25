#include <stdio.h>

int maiorNumero(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("O maior numero e %d\n", maiorNumero(x, y));

    return 0;
}

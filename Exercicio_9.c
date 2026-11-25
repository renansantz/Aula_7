#include <stdio.h>

void mostrarTabuada(int numero) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nTabuada do %d:\n", n);
    mostrarTabuada(n);

    return 0;
}

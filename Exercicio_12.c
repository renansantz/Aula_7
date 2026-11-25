#include <stdio.h>

#define PRODUTOS 8

int calcularTotalEstoque(int estoque[], int tamanho) {
    int total = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        total += estoque[i];
    }

    return total;
}

int contarEstoqueBaixo(int estoque[], int tamanho) {
    int contador = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        if (estoque[i] < 5) {
            contador++;
        }
    }

    return contador;
}

int buscarProduto(int estoque[], int tamanho, int codigo) {
    int posicao = codigo - 1;

    if (posicao >= 0 && posicao < tamanho) {
        return posicao;
    }

    return -1;
}

int main() {
    int estoque[PRODUTOS];
    int i, codigo, posicao;

    for (i = 0; i < PRODUTOS; i++) {
        printf("Digite a quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\nTotal em estoque: %d unidades\n", calcularTotalEstoque(estoque, PRODUTOS));
    printf("Produtos com estoque baixo (menos de 5 unidades): %d\n", contarEstoqueBaixo(estoque, PRODUTOS));

    printf("\nDigite o codigo do produto a buscar: ");
    scanf("%d", &codigo);

    posicao = buscarProduto(estoque, PRODUTOS, codigo);

    if (posicao == -1) {
        printf("Produto %d nao encontrado.\n", codigo);
    } else {
        printf("Produto %d encontrado na posicao %d do vetor, com %d unidades.\n",
               codigo, posicao, estoque[posicao]);
    }

    return 0;
}

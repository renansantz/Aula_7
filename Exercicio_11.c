#include <stdio.h>

#define ALUNOS 10

float calcularMediaTurma(float notas[], int tamanho) {
    float soma = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}

float encontrarMaiorNota(float notas[], int tamanho) {
    float maior = notas[0];
    int i;

    for (i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

int contarAprovados(float notas[], int tamanho) {
    int aprovados = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        if (notas[i] >= 7.0) {
            aprovados++;
        }
    }

    return aprovados;
}

void exibirResultados(float media, float maiorNota, int aprovados) {
    printf("\n--- Resultados da Turma ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Alunos aprovados: %d\n", aprovados);
}

int main() {
    float notas[ALUNOS];
    float media, maiorNota;
    int aprovados, i;

    for (i = 0; i < ALUNOS; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMediaTurma(notas, ALUNOS);
    maiorNota = encontrarMaiorNota(notas, ALUNOS);
    aprovados = contarAprovados(notas, ALUNOS);

    exibirResultados(media, maiorNota, aprovados);

    return 0;
}

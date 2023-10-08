#include <stdio.h>

int maior_valor(int *vetor, int tamanho) {
  int maior = vetor[0];
  for (int i = 1; i < tamanho; i++) {
    if (vetor[i] > maior && vetor[i] >= 0) {
      maior = vetor[i];
    }
  }
  return maior;
}

int main() {
  // Declaração das variáveis
  int vetor[10], maior;

  // Validação dos dados
  for (int i = 0; i < 10; i++) {
    do {
      printf("Digite um número inteiro positivo: ");
      scanf("%d", &vetor[i]);

      if (vetor[i] < 0) {
        printf("Número inválido. Digite um número inteiro positivo.\n");
      }
    } while (vetor[i] < 0);
  }

  // Chamada da função
  maior = maior_valor(vetor, 10);

  // Impressão do resultado
  printf("O maior valor é %d.\n", maior);

  return 0;
}
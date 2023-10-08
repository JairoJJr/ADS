#include <stdio.h>

int main() 
{
  int num[10];

  //Receber dados do vetor:
  printf("Digite 10 números:\n");
  for (int i = 0; i < 10; i++) {
    printf("Elemento %i: ", i + 1);
    scanf("%i", &num[i]);
  }

  //Mostrar valores do vetor na tela:
  printf("Elementos do vetor: ");
  for (int i = 0; i < 10; i++) {
    printf("%i ", num[i]);  // Removed '&' before num[i]
  }

  int maior = num[0];  // Inicializa a variável 'maior' com o primeiro elemento do vetor

  for (int i = 1; i < 10; i++) {
    if (num[i] > maior) {
      maior = num[i];  // Se um elemento maior for encontrado, atualize a variável 'maior'
      }
  }

  printf("\nO maior valor no vetor é: %i\n", maior);

  return 0;  // Added a return statement
}

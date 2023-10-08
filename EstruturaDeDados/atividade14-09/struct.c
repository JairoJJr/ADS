#include <stdio.h>

int main(){

  typedef struct{
    char nome[30];
    int idade;
    float peso, altura;
  }teste;
  teste a;

  printf("Digite o nome: ");
  scanf("%s", &a.nome);

  printf("Digite a idade: ");
  scanf("%i", &a.idade);

  printf("Digite o peso: ");
  scanf("%f", &a.peso);

  printf("Digite a altura: ");
  scanf("%f", &a.altura);

  return  0;
  
}
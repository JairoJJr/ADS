'''valor = int(input("Digite um número: "))
if valor < 10:
    print(f'O valor é menor que 10: {valor}.')
elif valor == 10:
    print(f'O valor é igual a 10: {valor}.')
else:
    print(f'O valor é maior que 10: {valor}.')'''

pilha = [12, "aluno",564.67]
if len(pilha) == 0:
    print("A pilha está vazia.")
else:
    pilha.pop()
    print(pilha)

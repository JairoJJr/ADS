def cadastrar(cadastro):
    while True:
        nome = (input("Digite o nome: "))
        if nome != "":
            cadastro.append(nome)
            print("\033[32mCadastro Bem Sucedido!\033[m")
            break
        else:   
            print("\033[31mDADO INVÁLIDO\033[m")
    return
def consultar(cadastro):
    if len(cadastro) == 0:
        print("\033[31mOpção inválida. O Cadastro está vazio.\033[m")
    else:
        for i in range(0, len(cadastro)):
            print(f"{i+1} - \033[33m{cadastro[i]}\033[m")
    return

def ultimo(cadastro):
    if len(cadastro) == 0:
        print("\033[31mOpção inválida. O Cadastro está vazio.\033[m")
    else:
        print(f"O último cadastro foi \033[33m{cadastro[-1]}\033[m.")
    return
def deletar(cadastro):
    if len(cadastro) == 0:
        print("\033[31mOpção inválida. O Cadastro está vazio.\033[m")
    else:
        print(f"Deletando último nome cadastrado: \033[m{cadastro[-1]}\033[m")
        cadastro.pop()
    return


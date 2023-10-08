import utils

cadastro = []
while True:
    print("-"*30)
    print(f"\tEscolha sua opção:\n")
    print("1: \033[33mCadastrar\033[m")
    print("2: \033[33mConsultar\033[m")
    print("3: \033[33mDeletar Último Cadastro\033[m")
    print("4: \033[33mSair\033[m")

    opcao = input("Opcção: ")
    print("-"*30)
    
    if opcao == "1":
        utils.cadastrar(cadastro)
    elif opcao == "2":
        utils.consultar(cadastro)
    elif opcao == "3":
        utils.deletar(cadastro)
    elif opcao == "4":
        break
    else:
        print("\033[31mDado Inválido!\033[m")





#include "ControllerCliente.hpp"
#include <iostream>

ControllerCliente::ControllerCliente() {
    
}

ControllerCliente::ControllerCliente(CadastroClientes* cadastroClientes):cadastroClientes(cadastroClientes) {

}

int ControllerCliente::cadastrarCliente(long cpf, std::string nome, std::string email, std::string endereco) {
    Cliente* c{new Cliente{cpf, nome, email, endereco}};
    cadastroClientes->cadastrarCliente(c);
    return c->getId();
}

Cliente* ControllerCliente::findCliente(long cpf) {
    return cadastroClientes->findCliente(cpf);
}
#include "ControllerCliente.hpp"

ControllerCliente::ControllerCliente(CadastroClientes* cadastroClientes):cadastroClientes(cadastroClientes) {

}

int ControllerCliente::cadastrarCliente(long cpf, std::string nome, std::string email, std::string endereco) {
    Cliente c{cpf, nome, email, endereco};
    cadastroClientes->cadastrarCliente(&c);
    return c.getId();
}

Cliente* ControllerCliente::findCliente(long cpf) {
    return cadastroClientes->findCliente(cpf);
}
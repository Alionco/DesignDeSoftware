#include "CadastroClientes.hpp"

#include <iostream>

CadastroClientes::CadastroClientes() {
    
}

void CadastroClientes::cadastrarCliente(Cliente* cliente) {
    listaClientes.push_back(cliente);
}
Cliente* CadastroClientes::findCliente(long cpf) {

    std::list<Cliente*>::iterator it;

    for(it = this->listaClientes.begin(); it != this->listaClientes.end(); it++) {

        if((*it)->getCpf() == cpf) {
            return *it;
        }
    }
    return nullptr;

}
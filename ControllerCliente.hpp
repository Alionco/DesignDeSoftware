#ifndef CONTROLLER_CLIENTE_HPP
#define CONTROLLER_CLIENTE_HPP

#include <string>
#include "CadastroClientes.hpp"


class ControllerCliente {

    public:

        ControllerCliente();

        int cadastrarCliente(long cpf, std::string nome, std::string email, std::string endereco);
        int findCliente(long cpf);


    private:

        CadastroClientes* cadastroClientes;
    

};

#endif
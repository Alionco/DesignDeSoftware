#ifndef CADASTRO_CLIENTES_HPP
#define CADASTRO_CLIENTES_HPP

#include <list>
#include "Cliente.hpp"


class CadastroClientes {

    public:

        CadastroClientes();

        void cadastrarCliente(Cliente* cliente);
        Cliente* findCliente(long cpf);


    private:

        std::list<Cliente*> listaClientes;
    

};

#endif
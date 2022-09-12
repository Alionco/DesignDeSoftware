#ifndef CADASTRO_CONTRATOS_HPP
#define CADASTRO_CONTRATOS_HPP

#include <list>
#include "Contrato.hpp"


class CadastroContratos {

    public:

        CadastroContratos();

        void addContrato(Contrato* contrato);
        Contrato* findContrato(int contratoId);
        Contrato* findContrato(int clienteId, int veiculoId);
        std::list<Contrato*> findContratos(int clienteId);


    private:

        std::list<Contrato*> listaContratos;
    

};

#endif
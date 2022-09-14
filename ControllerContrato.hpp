#ifndef CONTROLLER_CONTRATO_HPP
#define CONTROLLER_CONTRATO_HPP

#include <string>
#include <list>
#include "CadastroContratos.hpp"
#include "CadastroSeguros.hpp"
#include "CatalogoVeiculos.hpp"
#include "Contrato.hpp"

class ControllerContrato {

    public:

        ControllerContrato();
        ControllerContrato(CatalogoVeiculos* catalogoVeiculos, CadastroContratos* cadastroContratos, CadastroSeguros* cadastroSeguros);

        int gerarContrato(int clienteId, int veiculoId, int tipoVeiculo, int data);
        void contratarSeguro(int contratoId);
        std::list<Contrato*> pesquisarContratos(int clienteId);
        void ajustarLocacao(int contratoId, int data);
        void cobrarMulta(int contratoId, int data);
        void devolverVeiculo(int clienteId, int veiculoId);


    private:

        CadastroContratos* cadastroContratos;
        CadastroSeguros* cadastroSeguros;
        CatalogoVeiculos* catalogoVeiculos;
    

};

#endif
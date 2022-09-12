#ifndef CONTRATO_HPP
#define CONTRATO_HPP

#include "CatalogoVeiculos.hpp"
#include "CadastroSeguros.hpp"
#include "Seguro.hpp"


class Contrato {

    public:

        Contrato();
        Contrato(int id, int clienteId, int veiculoId, int data);

        void addSeguro(int seguroId);
        float calcularTotal();
        bool calcularPagamento();
        void ajustarLocacao(int data);
        void cobrarMulta(int data);
        void devolverVeiculo();

        int getId();
        void setId(int id);

        int getClienteId();
        void setClienteId(int clienteId);

        int getVeiculoId();
        void setVeiculoId(int veiculoId);

        int getSeguroId();
        void setSeguroId(int seguroId);

        int getData();
        void setData(int data);

        CatalogoVeiculos* getCatalogoVeiculos();
        void setDescricao(CatalogoVeiculos* catalogoVeiculos);

        CadastroSeguros* getCadastroSeguros();
        void setDescricao(CadastroSeguros* cadastroSeguros);

    private:

        int id;
        int clienteId;
        int veiculoId;
        int seguroId;
        int data;
        
        CatalogoVeiculos* catalogoVeiculos;
        CadastroSeguros* cadastroSeguros;

};

#endif
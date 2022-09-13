#ifndef CONTRATO_HPP
#define CONTRATO_HPP

#include "CatalogoVeiculos.hpp"
#include "CadastroSeguros.hpp"
#include "Seguro.hpp"


class Contrato {

    public:

        Contrato();
        Contrato(int clienteId, int veiculoId, int tipoVeiculo, int data);

        void addSeguro(int seguroId);
        float calcularTotal();
        void confirmarPagamento();
        void ajustarLocacao(int data);
        void cobrarMulta(int data);
        void devolverVeiculo();

        int getId();
        void setId(int id);

        int getClienteId();
        void setClienteId(int clienteId);

        int getVeiculoId();
        void setVeiculoId(int veiculoId);

        int getTipoVeiculo();
        void setTipoVeiculo(int tipo);

        int getSeguroId();
        void setSeguroId(int seguroId);

        int getData();
        void setData(int data);

        CatalogoVeiculos* getCatalogoVeiculos();
        void setCatalogoVeiculos(CatalogoVeiculos* catalogoVeiculos);

        CadastroSeguros* getCadastroSeguros();
        void setCadastroSeguros(CadastroSeguros* cadastroSeguros);

    private:

        static int proxId;

        int id;
        int clienteId;
        int veiculoId;
        int tipoVeiculo;
        int seguroId;
        int data;
        
        CatalogoVeiculos* catalogoVeiculos;
        CadastroSeguros* cadastroSeguros;

};

#endif
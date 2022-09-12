#ifndef CONTROLLER_VEICULO_HPP
#define CONTROLLER_VEICULO_HPP

#include <string>
#include <list>

#include "CatalogoVeiculos.hpp"
#include "DescricaoVeiculo.hpp"

class ControllerVeiculo {

    public:

        ControllerVeiculo();

        std::list<Veiculo*> pesquisarVeiculos(int tipo, DescricaoVeiculo* descricao);
        bool checarDisponibilidade(int veiculoId, int data);
        int cadastrarCarro(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo, std::string placa, std::string combustivel, float preco);
        int cadastrarBicicleta(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo, float preco);

    private:

        CatalogoVeiculos* catalogoVeiculos;
    

};

#endif
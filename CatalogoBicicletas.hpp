#ifndef CATALOGO_BICICLETAS_HPP
#define CATALOGO_BICICLETAS_HPP

#include <list>
#include "Bicicleta.hpp"
#include "DescricaoVeiculo.hpp"


class CatalogoBicicletas {

    public:

        CatalogoBicicletas();

        void addBicicleta(Bicicleta* bicicleta);
        Bicicleta* findBicicleta(int veiculoId);
        std::list<Bicicleta*> findBicicletas(DescricaoVeiculo* descricao);

    private:

        std::list<Bicicleta*> listaBicicletas;
    

};

#endif
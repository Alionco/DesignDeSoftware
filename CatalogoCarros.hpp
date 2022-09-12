#ifndef CATALOGO_CARROS_HPP
#define CATALOGO_CARROS_HPP

#include <list>
#include "Carro.hpp"
#include "DescricaoVeiculo.hpp"



class CatalogoCarros {

    public:

        CatalogoCarros();

        void addCarro(Carro* carro);
        Carro* findCarro(int veiculoId);
        std::list<Carro*> findCarros(DescricaoVeiculo* descricao);


    private:

        std::list<Carro*> listaCarros;
    

};

#endif
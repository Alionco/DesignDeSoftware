#ifndef CATALOGO_DESCRICOES_HPP
#define CATALOGO_DESCRICOES_HPP

#include <list>
#include "DescricaoVeiculo.hpp"


class CatalogoDescricoes {

    public:

        CatalogoDescricoes();

        void addDescricao(DescricaoVeiculo* bicicleta);
        DescricaoVeiculo* findDescricao(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo);


    private:

        std::list<DescricaoVeiculo*> listaDescricoes;
    

};

#endif
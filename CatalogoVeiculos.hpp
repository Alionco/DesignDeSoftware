#ifndef CATALOGO_VEICULOS_HPP
#define CATALOGO_VEICULOS_HPP

#include <list>
#include "Carro.hpp"
#include "Bicicleta.hpp"
#include "CatalogoBicicletas.hpp"
#include "CatalogoCarros.hpp"
#include "CatalogoDescricoes.hpp"


class CatalogoVeiculos {

    public:

        CatalogoVeiculos();
        CatalogoVeiculos(CatalogoBicicletas* catalogoBicicletas,CatalogoCarros* catalogoCarros, CatalogoDescricoes* catalogoDescricoes);

        std::list<Veiculo*> pesquisarVeiculos(int tipo, int ano, std::string cor, std::string categoria, std::string marca, std::string modelo);
        Veiculo* findVeiculo(int tipo, int veiculoId);
        void cadastrarCarro(Carro* carro);
        void cadastrarBicicleta(Bicicleta* bicicleta);
        std::list<DescricaoVeiculo*> findDescricao(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo);
        DescricaoVeiculo* findDescricaoExata(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo);

        

    private:

        CatalogoBicicletas* catalogoBicicletas;
        CatalogoCarros* catalogoCarros;
        CatalogoDescricoes* catalogoDescricoes;
    

};

#endif
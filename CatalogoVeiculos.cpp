#include "CatalogoVeiculos.hpp"

#include <iostream>

CatalogoVeiculos::CatalogoVeiculos(){
    
}

CatalogoVeiculos::CatalogoVeiculos(CatalogoBicicletas* catalogoBicicletas,CatalogoCarros* catalogoCarros, CatalogoDescricoes* catalogoDescricoes)
                                                        :catalogoBicicletas(catalogoBicicletas), catalogoCarros(catalogoCarros), catalogoDescricoes(catalogoDescricoes) {

}

std::list<Veiculo*> CatalogoVeiculos::pesquisarVeiculos(int tipo, int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) {

    std::list<Veiculo*> listaVeiculos;

    std::list<DescricaoVeiculo*> listaDescricoes = catalogoDescricoes->findDescricao(ano, cor, categoria, marca, modelo);
 
    if(!listaDescricoes.empty()) {

         if(tipo == 0) {
            listaVeiculos = catalogoCarros->findCarros(listaDescricoes);            
        } else {
            listaVeiculos = catalogoBicicletas->findBicicletas(listaDescricoes);
        }
    }
    return listaVeiculos;
}

Veiculo* CatalogoVeiculos::findVeiculo(int tipo, int veiculoId) {

    Veiculo* v;

    if(tipo == 0) {
        v = catalogoCarros->findCarro(veiculoId);
        
    } else {
        v = catalogoBicicletas->findBicicleta(veiculoId);
    }
    return v;
}

std::list<DescricaoVeiculo*> CatalogoVeiculos::findDescricao(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) {

    std::list<DescricaoVeiculo*> listaDescricoes = catalogoDescricoes->findDescricao(ano, cor, categoria, marca, modelo);

    if(listaDescricoes.empty()) {

        DescricaoVeiculo* d{new DescricaoVeiculo{ano, cor, categoria, marca, modelo}};
        catalogoDescricoes->addDescricao(d);

    }
    return listaDescricoes;
}

DescricaoVeiculo* CatalogoVeiculos::findDescricaoExata(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) {

    DescricaoVeiculo* d = catalogoDescricoes->findDescricaoExata(ano, cor, categoria, marca, modelo);

    if(!d) {

        d = new DescricaoVeiculo{ano, cor, categoria, marca, modelo};
        catalogoDescricoes->addDescricao(d);

    }
    return d;
}


void CatalogoVeiculos::cadastrarCarro(Carro* carro) {

    catalogoCarros->addCarro(carro);
}

void CatalogoVeiculos::cadastrarBicicleta(Bicicleta* bicicleta) {

    catalogoBicicletas->addBicicleta(bicicleta);
}
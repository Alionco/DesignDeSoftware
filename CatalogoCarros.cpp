#include "CatalogoCarros.hpp"
#include <iostream>

CatalogoCarros::CatalogoCarros(){
    
}

void CatalogoCarros::addCarro(Carro* carro) {
    listaCarros.push_back(carro);
}

Carro* CatalogoCarros::findCarro(int veiculoId) {

    std::list<Carro*>::iterator it;

    for(it = this->listaCarros.begin(); it != this->listaCarros.end(); it++) {

        if((*it)->getId() == veiculoId) {
            return *it;
        }
    }
    return nullptr;
}

std::list<Veiculo*> CatalogoCarros::findCarros(std::list<DescricaoVeiculo*> descricao) {

    std::list<Veiculo*> listaCarrosEncontrados;
    std::list<Carro*>::iterator it;
    std::list<DescricaoVeiculo*>::iterator itDesc;

    for(it = this->listaCarros.begin(); it != this->listaCarros.end(); it++) {

        for(itDesc = descricao.begin(); itDesc != descricao.end(); itDesc++) {

            if((*it)->getDescricao() == (*itDesc)) {
                listaCarrosEncontrados.push_back(*it);
            }

        }
        
    }

    return listaCarrosEncontrados;

}
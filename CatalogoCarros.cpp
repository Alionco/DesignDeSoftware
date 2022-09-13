#include "CatalogoCarros.hpp"

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

std::list<Veiculo*> CatalogoCarros::findCarros(DescricaoVeiculo* descricao) {

    std::list<Veiculo*> listaCarrosEncontrados;
    std::list<Carro*>::iterator it;

    for(it = this->listaCarros.begin(); it != this->listaCarros.end(); it++) {

        if((*it)->getDescricao() == descricao) {
            listaCarrosEncontrados.push_back(*it);
        }
    }

    return listaCarrosEncontrados;

}
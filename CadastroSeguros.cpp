#include "CadastroSeguros.hpp"

void CadastroSeguros::addSeguro(Seguro* seguro) {
    listaSeguros.push_back(seguro);
}

Seguro* CadastroSeguros::findSeguro(int seguroId) {

    std::list<Seguro*>::iterator it;

    for(it = this->listaSeguros.begin(); it != this->listaSeguros.end(); it++) {

        if((*it)->getId() == seguroId) {
            return *it;
        }
    }
    return nullptr;
}
#include "CatalogoBicicletas.hpp"

CatalogoBicicletas::CatalogoBicicletas() {
    
}

void CatalogoBicicletas::addBicicleta(Bicicleta* bicicleta) {
    listaBicicletas.push_back(bicicleta);
}
Bicicleta* CatalogoBicicletas::findBicicleta(int veiculoId) {

    std::list<Bicicleta*>::iterator it;

    for(it = this->listaBicicletas.begin(); it != this->listaBicicletas.end(); it++) {

        if((*it)->getId() == veiculoId) {
            return *it;
        }
    }
    return nullptr;

}
std::list<Veiculo*> CatalogoBicicletas::findBicicletas(std::list<DescricaoVeiculo*> descricao) {

    std::list<Veiculo*> listaBicicletasEncontradas;
    std::list<Bicicleta*>::iterator it;

    std::list<DescricaoVeiculo*>::iterator itDesc;


    for(it = this->listaBicicletas.begin(); it != this->listaBicicletas.end(); it++) {

        for(itDesc = descricao.begin(); itDesc != descricao.end(); itDesc++) {

            if((*it)->getDescricao() == (*itDesc)) {
                listaBicicletasEncontradas.push_back(*it);
            }
        }
    }

    return listaBicicletasEncontradas;
}
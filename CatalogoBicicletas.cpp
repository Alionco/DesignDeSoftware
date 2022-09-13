#include "CatalogoBicicletas.hpp"

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
std::list<Veiculo*> CatalogoBicicletas::findBicicletas(DescricaoVeiculo* descricao) {

    std::list<Veiculo*> listaBicicletasEncontradas;
    std::list<Bicicleta*>::iterator it;

    for(it = this->listaBicicletas.begin(); it != this->listaBicicletas.end(); it++) {

        if((*it)->getDescricao() == descricao) {
            listaBicicletasEncontradas.push_back(*it);
        }
    }

    return listaBicicletasEncontradas;
}
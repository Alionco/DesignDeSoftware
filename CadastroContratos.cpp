#include "CadastroContratos.hpp"

CadastroContratos::CadastroContratos() {
    
}

void CadastroContratos::addContrato(Contrato* contrato) {
    listaContratos.push_back(contrato);
}
Contrato* CadastroContratos::findContrato(int contratoId) {

    std::list<Contrato*>::iterator it;

    for(it = this->listaContratos.begin(); it != this->listaContratos.end(); it++) {

        if((*it)->getId() == contratoId) {
            return *it;
        }
    }
    return nullptr;
}


Contrato* CadastroContratos::findContrato(int clienteId, int veiculoId) {

    std::list<Contrato*>::iterator it;

    for(it = this->listaContratos.begin(); it != this->listaContratos.end(); it++) {

        if((*it)->getClienteId() == clienteId && (*it)->getVeiculoId() == veiculoId) {
            return *it;
        }
    }
    return nullptr;

}

std::list<Contrato*> CadastroContratos::findContratos(int clienteId) {

    std::list<Contrato*> listaContratosCliente;
    std::list<Contrato*>::iterator it;

    for(it = this->listaContratos.begin(); it != this->listaContratos.end(); it++) {

        if((*it)->getClienteId() == clienteId) {
            listaContratosCliente.push_back(*it);
        }
    }
    return listaContratosCliente;   

}
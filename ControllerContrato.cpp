#include "ControllerContrato.hpp"

#include <iostream>


ControllerContrato::ControllerContrato(CatalogoVeiculos* catalogoVeiculos, CadastroContratos* cadastroContratos, CadastroSeguros* cadastroSeguros)
                                :cadastroContratos(cadastroContratos), cadastroSeguros(cadastroSeguros),catalogoVeiculos(catalogoVeiculos) {

}

int ControllerContrato::gerarContrato(int clienteId, int veiculoId, int tipoVeiculo, int data) {

    Contrato* c{new Contrato{clienteId, veiculoId, tipoVeiculo, data}};
    cadastroContratos->addContrato(c);

    Veiculo* v = catalogoVeiculos->findVeiculo(tipoVeiculo, veiculoId);
    std::cout << "carro escolhido" << std::endl;
    v->imprimeVeiculo();

    if(v != nullptr) {
        v->alterarAgenda(data);
    }

    return c->getId();
}
void ControllerContrato::contratarSeguro(int contratoId) {
    Contrato* c = cadastroContratos->findContrato(contratoId);
    Seguro* s{new Seguro{contratoId, 1000}}; // valor fixo de 1000 para seguro
    if(c != nullptr) {
        c->addSeguro(s->getId());
        cadastroSeguros->addSeguro(s);
    }
}

std::list<Contrato*> ControllerContrato::pesquisarContratos(int clienteId) {

    return cadastroContratos->findContratos(clienteId);
}

void ControllerContrato::ajustarLocacao(int contratoId, int data) {

    Contrato* c = cadastroContratos->findContrato(contratoId);
    if(c != nullptr) {
        c->ajustarLocacao(data);
    }

}
void ControllerContrato::cobrarMulta(int contratoId, int data) {

    Contrato* c = cadastroContratos->findContrato(contratoId);
    if(c != nullptr) {
        c->cobrarMulta(data);
    }

}
void ControllerContrato::devolverVeiculo(int clienteId, int veiculoId) {

    Contrato* c = cadastroContratos->findContrato(clienteId, veiculoId);
    if(c != nullptr) {
        c->devolverVeiculo();
    }

}
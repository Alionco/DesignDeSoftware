#include "CadastroClientes.hpp"
#include "CadastroContratos.hpp"
#include "CadastroSeguros.hpp"
#include "CatalogoBicicletas.hpp"
#include "CatalogoCarros.hpp"
#include "CatalogoDescricoes.hpp"
#include "CatalogoVeiculos.hpp"
#include "ControllerCliente.hpp"
#include "ControllerContrato.hpp"
#include "ControllerPagamento.hpp"
#include "ControllerVeiculo.hpp"


#include <iostream>

int main() {

    // start up
    CadastroContratos cadastroContratos;
    CatalogoCarros catalogoCarros;
    CatalogoBicicletas catalogoBicicletas;
    CatalogoDescricoes catalogoDescricoes;
    CatalogoVeiculos catalogoVeiculos{&catalogoBicicletas, &catalogoCarros, &catalogoDescricoes};
    CadastroClientes cadastroClientes;
    CadastroSeguros cadastroSeguros;
    ControllerVeiculo controllerVeiculo{&catalogoVeiculos};
    ControllerContrato controllerContrato(&catalogoVeiculos, &cadastroContratos, &cadastroSeguros);
    ControllerCliente controllerCliente{&cadastroClientes};
    ControllerPagamento controllerPagamento{&cadastroContratos};

    std::cout << "alo mamae";

    return 0;
}
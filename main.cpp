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
#include "Cliente.hpp"
#include "Carro.hpp"
#include "Bicicleta.hpp"
#include "Contrato.hpp"
#include "Seguro.hpp"
#include "DescricaoVeiculo.hpp"
#include "Veiculo.hpp"

#include <iostream>
#include <list>

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

    // cadastrando alguns clientes para o sistema

    controllerCliente.cadastrarCliente(2222222222,"tiago conte", "thc19@inf", "rua zzzz");
    controllerCliente.cadastrarCliente(3333333333,"prof silvia", "silvia@inf", "rua ufpr");

/*     Cliente* cliente = controllerCliente.findCliente(44444);
    if(cliente) {
        std::cout << cliente->getEmail() << std::endl;
    } */

    // cadastrando alguns veiculos para o sistema
    controllerVeiculo.cadastrarCarro(2010, "vermelho", "luxo", "ferrari", "GX90", "ABC9999", "gasolina", 1350.50);
    controllerVeiculo.cadastrarBicicleta(2019, "preta", "trilha", "caloi", "trilhaRX01", 200.0);
    controllerVeiculo.cadastrarCarro(2020, "branco", "economico", "fiat", "gol", "XYZ0000", "alcool", 500.0);
    controllerVeiculo.cadastrarCarro(2017, "branco", "luxo", "volks", "fusion", "IJK1234", "gasolina", 350.0);
    controllerVeiculo.cadastrarCarro(2017, "cinza", "economico", "fiat", "toro", "HIJ5555", "diesel", 700.0);



    //ALUGAR CARRO

    // pesquisar veiculo, ex: cliente quer carro 2017
    std::cout << "Buscando veiculos ano 2017: " << std::endl;

    std::list<Veiculo*> carros = controllerVeiculo.pesquisarVeiculos(0,2017,"x", "x", "x", "x");
    std::list<Veiculo*>::iterator it;
    
    std::cout << "Veiculos encontrados: " << carros.size() << std::endl;
    for(it = carros.begin(); it != carros.end(); it++) {
        (*it)->imprimeVeiculo();
    }

    //digamos que o usuario escolheu o primeiro da lista
    it = carros.begin();

    Veiculo* carroEscolhido = (*it);

    // verifica se esta disponivel
    std::cout << "status do carro escolhido: " << (carroEscolhido->verificaAgenda(5)? "disponivel":"alugado") << std::endl;

    //cadastra o cliente
    int clienteId = controllerCliente.cadastrarCliente(1111111111,"lucas alionco", "lap19@inf", "rua qlq");

    //gera o contrato
    int contratoId = controllerContrato.gerarContrato(clienteId, carroEscolhido->getId(), 0, 5);
        std::cerr << "contr id" << contratoId << std::endl;

    //adiciona seguro
    controllerContrato.contratarSeguro(contratoId);

    //calcular valor total da operacao
    float totalOperacao = controllerPagamento.calcularTotal(contratoId);
    std::cout << "Valor total da operacao: " << totalOperacao << std::endl;










    return 0;
}
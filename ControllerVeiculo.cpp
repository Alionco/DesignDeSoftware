#include "ControllerVeiculo.hpp"

ControllerVeiculo::ControllerVeiculo(CatalogoVeiculos* catalogoVeiculos): catalogoVeiculos(catalogoVeiculos) {

}

std::list<Veiculo*> ControllerVeiculo::pesquisarVeiculos(int tipo, int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) {

    return catalogoVeiculos->pesquisarVeiculos(tipo, ano, cor, categoria, marca, modelo);
}

bool ControllerVeiculo::checarDisponibilidade(int tipo, int veiculoId, int data) {
    Veiculo* v = catalogoVeiculos->findVeiculo(tipo, veiculoId);
    if(v != nullptr) {
        return v->verificaAgenda(data);
    }
    return false;
}

int ControllerVeiculo::cadastrarCarro(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo, std::string placa, std::string combustivel, float preco) {

    DescricaoVeiculo* d = catalogoVeiculos->findDescricao(ano, cor, categoria, marca, modelo);
    Carro c{"disponivel", preco, placa, combustivel, d};
    catalogoVeiculos->cadastrarCarro(&c);
    return c.getId();
}

int ControllerVeiculo::cadastrarBicicleta(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo, float preco) {

    DescricaoVeiculo* d = catalogoVeiculos->findDescricao(ano, cor, categoria, marca, modelo);
    Bicicleta b{"disponivel", preco, d};
    catalogoVeiculos->cadastrarBicicleta(&b);
    return b.getId();
    
}
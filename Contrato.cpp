#include "Contrato.hpp"

int Contrato::proxId{0};

Contrato::Contrato(int clienteId, int veiculoId, int tipoVeiculo, int data)
                            :clienteId(clienteId), veiculoId(veiculoId), data(data), tipoVeiculo(tipoVeiculo), id{Contrato::proxId} {
    Contrato::proxId++;
}

void Contrato::addSeguro(int seguroId) {
    this->seguroId = seguroId;
}
float Contrato::calcularTotal() {
    Veiculo* v = catalogoVeiculos->findVeiculo(tipoVeiculo,veiculoId);
    float totalVeiculo = v->calcularAluguel();
    float totalSeguro = 0;
    if(seguroId != 0) {
        Seguro* s = cadastroSeguros->findSeguro(seguroId);
        totalSeguro = s->calcularSeguro();
    }
    return totalVeiculo + totalSeguro;
}
void Contrato::confirmarPagamento() {
    Veiculo* v = catalogoVeiculos->findVeiculo(tipoVeiculo,veiculoId);
    v->atualizarStatus("alugado");
}
void Contrato::ajustarLocacao(int data) {
    Veiculo* v = catalogoVeiculos->findVeiculo(tipoVeiculo,veiculoId);
    v->alterarAgenda(data);
}
void Contrato::cobrarMulta(int data) {
    Veiculo* v = catalogoVeiculos->findVeiculo(tipoVeiculo,veiculoId);
    v->alterarAgenda(data+1); //1 dia de multa
}
void Contrato::devolverVeiculo() {
    Veiculo* v = catalogoVeiculos->findVeiculo(tipoVeiculo,veiculoId);
    v->atualizarStatus("disponivel");
}

int Contrato::getId() {
    return id;
}

int Contrato::getClienteId() {
    return clienteId;
}
void Contrato::setClienteId(int clienteId) {
    this->clienteId = clienteId;
}

int Contrato::getVeiculoId() {
    return veiculoId;
}
void Contrato::setVeiculoId(int veiculoId) {
    this->veiculoId = veiculoId;
}

int Contrato::getTipoVeiculo() {
    return tipoVeiculo;
}
void Contrato::setTipoVeiculo(int tipo) {
    this->tipoVeiculo = tipoVeiculo;
}

int Contrato::getSeguroId() {
    return seguroId;
}

int Contrato::getData() {
    return data;
}
void Contrato::setData(int data) {
    this->data = data;
}

CatalogoVeiculos* Contrato::getCatalogoVeiculos() {
    return catalogoVeiculos;
}
void Contrato::setCatalogoVeiculos(CatalogoVeiculos* catalogoVeiculos) {
    this->catalogoVeiculos = catalogoVeiculos;
}

CadastroSeguros* Contrato::getCadastroSeguros() {
    return cadastroSeguros;
}
void Contrato::setCadastroSeguros(CadastroSeguros* cadastroSeguros) {
    this->cadastroSeguros = cadastroSeguros;
}
#include "Veiculo.hpp"

#include <iostream>

int Veiculo::proxId{0};

Veiculo::Veiculo() {

}

Veiculo::Veiculo(std::string status, float preco, DescricaoVeiculo* descricao)
        :id{Veiculo::proxId}, preco(preco), status(status), descricao(descricao) {

    Veiculo::proxId++;
}

bool Veiculo::verificaAgenda(int data) {
    return true;
}

void Veiculo::alterarAgenda(int data) {
    this->data = data;
}


float Veiculo::calcularAluguel() {
    return preco * data;

}

void Veiculo::atualizarStatus(std::string status) {
    this->status = status;

}

int Veiculo::getId() {
    return id;
}

std::string Veiculo::getStatus() {
    return status;
}

float Veiculo::getPreco() {
    return preco;
}
void Veiculo::setPreco(float preco) {
    this->preco = preco;
}

DescricaoVeiculo* Veiculo::getDescricao() {
    return descricao;
}
void Veiculo::setDescricao(DescricaoVeiculo* descricao) {
    this->descricao = descricao;
}

void Veiculo::imprimeVeiculo() {
    std::cout << "ano: " << this->getDescricao()->getAno() << " cor: " << this->getDescricao()->getCor() << " categoria: " << this->getDescricao()->getCategoria() << " marca: " << this->getDescricao()->getMarca() << " modelo: " << this->getDescricao()->getModelo() << " diaria: " << this->getPreco() << std::endl;
}

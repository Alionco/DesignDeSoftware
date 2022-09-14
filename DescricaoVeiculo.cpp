#include "DescricaoVeiculo.hpp"

DescricaoVeiculo::DescricaoVeiculo() {

}

DescricaoVeiculo::DescricaoVeiculo(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) 
                                                        :cor(cor), categoria(categoria), marca(marca), modelo(modelo),ano(ano) {
}

int DescricaoVeiculo::getAno() {
    return ano;
}
void DescricaoVeiculo::setAno(int ano) {
    this->ano = ano;
}

std::string DescricaoVeiculo::getCor() {
    return cor;
}
void DescricaoVeiculo::setCor(std::string cor) {
    this->cor = cor;
}

std::string DescricaoVeiculo::getCategoria() {
    return categoria;
}
void DescricaoVeiculo::setCategoria(std::string categoria) {
    this->categoria = categoria;
}

std::string DescricaoVeiculo::getMarca() {
    return marca;
}
void DescricaoVeiculo::setMarca(std::string marca) {
    this->marca = marca;
}

std::string DescricaoVeiculo::getModelo() {
    return modelo;
}
void DescricaoVeiculo::setModelo(std::string modelo) {
    this->modelo = modelo;
}
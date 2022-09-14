#include "Carro.hpp"

Carro::Carro(){
    
}

Carro::Carro(std::string status, float preco, std::string placa, std::string combustivel, DescricaoVeiculo* descricao)
            :Veiculo(status, preco, descricao), placa(placa), combustivel(combustivel) {
    
}

std::string Carro::getPlaca() {
    return placa;
}
void Carro::setPlaca(std::string placa) {
    this->placa = placa;
}

std::string Carro::getCombustivel() {
    return combustivel;
}
void Carro::setCombustivel(std::string combustivel) {
    this->combustivel = combustivel;
}


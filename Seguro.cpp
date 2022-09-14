#include "Seguro.hpp"

int Seguro::proxId{1};

Seguro::Seguro(){

}

Seguro::Seguro(int contratoId, float valor)
                        :id{Seguro::proxId}, contratoId(contratoId), valor(valor) {
    Seguro::proxId++;
}

float Seguro::calcularSeguro() {
    return valor;
}
 
int Seguro::getId() {
    return id;
}

int Seguro::getContratoId() {
    return contratoId;
}
void Seguro::setContratoId(int contratoId) {
    this->contratoId = contratoId;
}

void Seguro::setValor(float valor) {
    this->valor = valor;
}
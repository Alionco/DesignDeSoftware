#include "Seguro.hpp"

int Seguro::proxId{1};

Seguro::Seguro(int contratoId, float valor)
                        :contratoId(contratoId), valor(valor), id{Seguro::proxId} {
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
#include "ControllerPagamento.hpp"

ControllerPagamento::ControllerPagamento() {
    
}
ControllerPagamento::ControllerPagamento(CadastroContratos* cadastroContratos):cadastroContratos(cadastroContratos) {

}

float ControllerPagamento::calcularTotal(int contratoId) {
    Contrato* c = cadastroContratos->findContrato(contratoId);
    float t = 0;
    if(c != nullptr) {
        t = c->calcularTotal();
    }
    return t;
}
void ControllerPagamento::confirmarPagamento(int contratoId) {

    Contrato* c = cadastroContratos->findContrato(contratoId);
    if(c != nullptr) {
        c->confirmarPagamento();
    }
}
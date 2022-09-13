#include "ControllerPagamento.hpp"

ControllerPagamento::ControllerPagamento(CadastroContratos* cadastroContratos):cadastroContratos(cadastroContratos) {

}

float ControllerPagamento::calcularTotal(int contratoId) {
    Contrato* c = cadastroContratos->findContrato(contratoId);
    if(c != nullptr) {
        float t = c->calcularTotal();
    }
}
void ControllerPagamento::confirmarPagamento(int contratoId) {

    Contrato* c = cadastroContratos->findContrato(contratoId);
    if(c != nullptr) {
        c->confirmarPagamento();
    }
}
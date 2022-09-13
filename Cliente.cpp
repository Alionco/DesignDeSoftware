#include "Cliente.hpp"

int Cliente::proxId{0};

Cliente::Cliente(long cpf, std::string nome, std::string email, std::string endereco)
                :cpf(cpf), nome(nome), email(email), endereco(endereco), id{Cliente::proxId} {

    Cliente::proxId++;
}

int Cliente::getId() {
    return id;
}

long Cliente::getCpf() {
    return cpf;
}
void Cliente::setCpf(long cpf) {
    this->cpf = cpf;
}       

std::string Cliente::getNome() {
    return nome;
}
void Cliente::setNome(std::string nome) {
    this->nome = nome;
}

std::string Cliente::getEmail() {
    return email;
}
void Cliente::setEmail(std::string email) {
    this->email = email;
}
                
std::string Cliente::getEndereco() {
    return endereco;
}
void Cliente::setEndereco(std::string endereco) {
    this->endereco = endereco;
}
#include "CatalogoDescricoes.hpp"

#include <iostream>

CatalogoDescricoes::CatalogoDescricoes() {
    
}

 void CatalogoDescricoes::addDescricao(DescricaoVeiculo* descricao) {
    listaDescricoes.push_back(descricao);
 }

std::list<DescricaoVeiculo*> CatalogoDescricoes::findDescricao(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) {

    std::list<DescricaoVeiculo*> descricoesEncontradas;
    std::list<DescricaoVeiculo*>::iterator it;

    for(it = this->listaDescricoes.begin(); it != this->listaDescricoes.end(); it++) {

        if((*it)->getAno() == ano || (*it)->getCor() == cor || (*it)->getCategoria() == categoria || (*it)->getMarca() == marca || (*it)->getModelo() == modelo) {
            descricoesEncontradas.push_back((*it));
        }
    }
    
    return descricoesEncontradas;
}


DescricaoVeiculo* CatalogoDescricoes::findDescricaoExata(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo) {

    std::list<DescricaoVeiculo*>::iterator it;

    for(it = this->listaDescricoes.begin(); it != this->listaDescricoes.end(); it++) {

        if((*it)->getAno() == ano && (*it)->getCor() == cor && (*it)->getCategoria() == categoria && (*it)->getMarca() == marca && (*it)->getModelo() == modelo) {
            
            return (*it);
        }
    }
    
    return nullptr;
}
#ifndef CARRO_HPP
#define CARRO_HPP

#include <string>
#include "Veiculo.hpp"

class Carro : public Veiculo {

    public:
        Carro();
        Carro(int id, std::string status, float preco, std::string placa, std::string combustivel, DescricaoVeiculo* descricao);

        std::string getPlaca();
        void setPlaca(std::string placa);

        std::string getCombustivel();
        void setCombustivel(std::string combustivel);

    private:

        std::string placa;
        std::string combustivel;

};


#endif
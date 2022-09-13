#ifndef BICICLETA_HPP
#define BICICLETA_HPP

#include <string>
#include "Veiculo.hpp"

class Bicicleta : public Veiculo {

    public:
        Bicicleta();
        Bicicleta(std::string status, float preco, DescricaoVeiculo* descricao);

    private:

};


#endif
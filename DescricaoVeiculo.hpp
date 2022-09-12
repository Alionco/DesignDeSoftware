#ifndef DESCRICAO_VEICULO_HPP
#define DESCRICAO_VEICULO_HPP

#include <string>


class DescricaoVeiculo {

    public:
    
        DescricaoVeiculo();
        DescricaoVeiculo(int ano, std::string cor, std::string categoria, std::string marca, std::string modelo);

        int getAno();
        void setAno(int ano);

        std::string getCor();
        void setCor(std::string cor);

        std::string getCategoria();
        void setCategoria(std::string categoria);

        std::string getMarca();
        void setMarca(std::string marca);

        std::string getModelo();
        void setModelo(std::string modelo);

    private:

        std::string cor;
        std::string categoria;
        std::string marca;
        std::string modelo;
        int ano;


};

#endif
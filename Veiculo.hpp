#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <string>
#include "DescricaoVeiculo.hpp"

class Veiculo {

    public:

        Veiculo();
        Veiculo(std::string status, float preco, DescricaoVeiculo* descricao);

        bool verificaAgenda(int data);
        void alterarAgenda(int data);
        float calcularAluguel();
        void atualizarStatus(std::string status);

        int getId();

        std::string getStatus();

        float getPreco();
        void setPreco(float preco);

        DescricaoVeiculo* getDescricao();
        void setDescricao(DescricaoVeiculo* descricao);

    protected:

        static int proxId;

        int data;
        int id;
        float preco;
        std::string status;
        DescricaoVeiculo* descricao;

};

#endif
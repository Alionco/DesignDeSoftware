#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class Veiculo {

    public:
        Veiculo();
        bool verificaAgenda(int data);
        void alterarAgenda(int data);
        float calcularAluguel();
        void atualizarStatus(std::string estado);




    protected:
        int id;
        float preco;
        std::string status;





    
};




#endif
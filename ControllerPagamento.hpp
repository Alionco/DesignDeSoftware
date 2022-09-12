#ifndef CONTROLLER_PAGAMENTO_HPP
#define CONTROLLER_PAGAMENTO_HPP


#include "CadastroContratos.hpp"


class ControllerPagamento{

    public:

        ControllerPagamento();

        float calcularTotal(int contratoId);
        void confirmarPagamento();
        

    private:

        CadastroContratos* cadastroContratos;
    
};

#endif
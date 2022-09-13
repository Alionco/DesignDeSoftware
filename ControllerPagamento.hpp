#ifndef CONTROLLER_PAGAMENTO_HPP
#define CONTROLLER_PAGAMENTO_HPP


#include "CadastroContratos.hpp"


class ControllerPagamento{

    public:

        ControllerPagamento(CadastroContratos* cadastroContratos);

        float calcularTotal(int contratoId);
        void confirmarPagamento(int contratoId);
        

    private:

        CadastroContratos* cadastroContratos;
    
};

#endif
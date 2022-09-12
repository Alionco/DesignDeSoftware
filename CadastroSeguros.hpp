#ifndef CADASTRO_SEGUROS_HPP
#define CADASTRO_SEGUROS_HPP

#include <list>
#include "Seguro.hpp"


class CadastroSeguros {

    public:

        CadastroSeguros();

        void addSeguro(Seguro* seguro);
        Seguro* findSeguro(int seguroId);


    private:

        std::list<Seguro*> listaSeguros;
    

};

#endif
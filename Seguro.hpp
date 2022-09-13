#ifndef SEGURO_HPP
#define SEGURO_HPP

class Seguro {

    public:

        Seguro();
        Seguro(int contratoId, float valor);

        float calcularSeguro();
 
        int getId();
        void setId(int id);

        int getContratoId();
        void setContratoId(int contratoId);

        float getValor();
        void setValor(float valor);


    private:

        static int proxId;

        int id;
        int contratoId;
        float valor;
        
};

#endif
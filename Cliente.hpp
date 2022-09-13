#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {

    public:

        Cliente();
        Cliente(long cpf, std::string nome, std::string email, std::string endereco);

        int getId();

        long getCpf();
        void setCpf(long cpf);       

        std::string getNome();
        void setNome(std::string nome);

        std::string getEmail();
        void setEmail(std::string email);
                
        std::string getEndereco();
        void setEndereco(std::string endereco);


    private:

        static int proxId;

        int id;
        long cpf;
        std::string nome;
        std::string email;
        std::string endereco;

};

#endif
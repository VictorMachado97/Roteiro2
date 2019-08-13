#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <sstream>

class Endereco
{
    public:
        Endereco();
        Endereco(int numero, std::string rua, std::string bairro, std::string estado, std::string cidade, std::string cep);

        int getNumero();
        std::string getRua();
        std::string getBairro();
        std::string getEstado();
        std::string getCidade();
        std::string getCep();

        void setNumero(int numero);
        void setRua(std::string rua);
        void setBairro(std::string bairro);
        void setEstado(std::string estado);
        void setCidade(std::string cidade);
        void setCep(std::string cep);

        std::string toString();
    private:
        int numero;
        std::string rua;
        std::string bairro;
        std::string estado;
        std::string cidade;
        std::string cep;
};

#endif // ENDERECO_H

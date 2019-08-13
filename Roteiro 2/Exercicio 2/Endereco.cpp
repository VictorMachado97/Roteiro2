#include "Endereco.h"

using namespace std;

Endereco::Endereco(){
    numero = 0;
    rua = bairro = estado = cidade = cep = " ";
}

Endereco::Endereco(int numero, string rua, string bairro, string estado, string cidade, string cep){
    setNumero(numero);
    setRua(rua);
    setBairro(bairro);
    setEstado(estado);
    setCidade(cidade);
    setCep(cep);
}

int Endereco::getNumero(){
    return numero;
}

string Endereco::getRua(){
    return rua;
}

string Endereco::getBairro(){
    return bairro;
}

string Endereco::getEstado(){
    return estado;
}

string Endereco::getCidade(){
    return cidade;
}

string Endereco::getCep(){
    return cep;
}

void Endereco::setNumero(int numero){
    if(numero >= 0)
        this->numero = numero;
    else
        this->numero = 0;
}

void Endereco::setRua(string rua){
    this->rua = rua;
}

void Endereco::setBairro(string bairro){
    this->bairro = bairro;
}

void Endereco::setEstado(string estado){
    this->estado = estado;
}

void Endereco::setCidade(string cidade){
    this->cidade = cidade;
}

void Endereco::setCep(string cep){
    this->cep = cep;
}

string Endereco::toString(){
    stringstream resumo;

    resumo << "Numero: " << numero << "\nRua: " << rua << "\nBairro: " << bairro << "\nEstado: " << estado
           << "\nCidade: " << cidade << "\nCep: " << cep << endl;

    return resumo.str();
}

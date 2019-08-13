#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(){
    nome = telefone = " ";
    endereco = Endereco();
}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone){
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
}

string Pessoa::getNome(){
    return nome;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setEndereco(Endereco endereco){
    if(endereco.getNumero() >= 0)
        this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::toString(){
    stringstream resumo;

    resumo << "Nome: " << nome << endl << endereco.toString() << "Telefone: " << telefone << endl;

    return resumo.str();
}


#include "Trabalhador.h"

#define ERROR -1

Trabalhador::Trabalhador()
{
    nome = " ";
    salario = 0;
}

std::string Trabalhador::getNome(){
    return nome;
}

double Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(std::string nome){
    this->nome = nome;
}
void Trabalhador::setSalario(double salario){
    if(salario > 0)
        this->salario = salario;
    else
        this->salario = 0;
}

double Trabalhador::calcularPagamentoSemanal(int horas){
    return ERROR;
}

double Trabalhador::getValorDaHora(){
    return ERROR;
}

void Trabalhador::setValorDaHora(double valorDaHora){

}

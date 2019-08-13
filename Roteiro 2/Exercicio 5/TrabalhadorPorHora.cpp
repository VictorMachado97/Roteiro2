#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{
    nome = " ";
    salario = 0;
}
TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, double valorDaHora){
    setNome(nome);
    setValorDaHora(valorDaHora);
    setSalario(0);
}

double TrabalhadorPorHora::getValorDaHora(){
    return valorDaHora;
}

void TrabalhadorPorHora::setValorDaHora(double valorDaHora){
    if(valorDaHora > 0)
        this->valorDaHora = valorDaHora;
    else
        this->valorDaHora = 0;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    double pagSemanal = 0;

    if(horas > 40){
        horas-= 40;

        pagSemanal += 40 * valorDaHora;
        pagSemanal += (horas * 1.5) * valorDaHora;
    }else{
        pagSemanal += horas * valorDaHora;
    }

    salario = pagSemanal * 4;

    return pagSemanal;
}

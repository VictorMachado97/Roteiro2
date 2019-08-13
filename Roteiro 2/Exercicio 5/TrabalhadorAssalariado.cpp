#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    nome = " ";
    salario = 0;
}
TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario){
    setNome(nome);
    setSalario(salario);
}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){
    return salario / 4;
}

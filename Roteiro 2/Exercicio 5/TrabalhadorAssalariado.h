#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(std::string nome, double salario);

        double calcularPagamentoSemanal(int horas);
};

#endif // TRABALHADORASSALARIADO_H

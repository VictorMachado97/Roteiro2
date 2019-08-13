#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <iostream>

class Trabalhador
{
    public:
        Trabalhador();

        std::string getNome();
        double getSalario();

        void setNome(std::string nome);
        void setSalario(double salario);

        virtual double calcularPagamentoSemanal(int horas);
        virtual double getValorDaHora();
        virtual void setValorDaHora(double valorDaHora);
    protected:
        std::string nome;
        double salario;
};

#endif // TRABALHADOR_H

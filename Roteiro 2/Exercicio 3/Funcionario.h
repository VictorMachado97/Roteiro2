#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int matricula, std::string nome, double salario);

        int getMatricula();
        std::string getNome();
        virtual double getSalario();
        virtual double getSalario(float percentual);

        void setMatricula(int matricula);
        void setNome(std::string nome);
        void setSalario(double salario);

    protected:
        int matricula;
        std::string nome;
        double salario;
};

#endif // FUNCIONARIO_H

#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"

using namespace std;

class Consultor : public Funcionario
{
    public:
    	
        Consultor();
        Consultor(int matricula, string nome, double salario);

        double getSalario();
        double getSalario(float percentual);
};

#endif // CONSULTOR_H

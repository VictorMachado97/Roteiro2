#include "Consultor.h"

using namespace std;

Consultor::Consultor()
{
    nome = " ";
    matricula = salario = 0;
}

Consultor::Consultor(int matricula, string nome, double salario){
	
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

double Consultor::getSalario(){
	
    return salario + (salario * 0.1);
}

double Consultor::getSalario(float percentual){
	
    return salario + (salario * (percentual/100));
}

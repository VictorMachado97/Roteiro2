#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario()
{
    nome = " ";
    salario = matricula = 0;
}

Funcionario::Funcionario(int matricula, string nome, double salario){
	
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

int Funcionario::getMatricula(){
	
    return matricula;
}

string Funcionario::getNome(){
	
    return nome;
}

double Funcionario::getSalario(){
	
    return salario;
}

double Funcionario::getSalario(float percentual){

}

void Funcionario::setMatricula(int matricula){
	
    if(matricula > 0)
        this->matricula = matricula;
    else
        this->matricula = 0;
}

void Funcionario::setNome(string nome){
	
    this->nome = nome;
}

void Funcionario::setSalario(double salario){
	
    if(salario > 0)
        this->salario = salario;
    else
        this->salario = 0;
}

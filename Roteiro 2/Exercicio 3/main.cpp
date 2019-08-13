#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario f1 = Funcionario(2204, "Victor Machado", 7800.00);
    Funcionario *c1 = new Consultor(4022, "Victor Sarmento", 12000.00);

    cout << "Nome do funcionario: " << f1.getNome() << "\nMatricula: " << f1.getMatricula() << "\nSalario: " << f1.getSalario() << endl << endl;
    cout << "Nome do consultor: " << c1->getNome() << "\nMatricula: " << c1->getMatricula() << "\nSalario (com 10% de aumento): " << c1->getSalario() << endl;
    cout << "Salario (com 50% de aumento): " << c1->getSalario(50) << endl;

    return 0;
}

#include <iostream>

#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    Trabalhador *t1 = new TrabalhadorPorHora("Victor Machado", 27);
    Trabalhador *t2 = new TrabalhadorAssalariado("Victor Sarmento", 9001);

    cout << "Nome: " << t1->getNome() << "\nPagamento semanal: " << t1->calcularPagamentoSemanal(60) << "\nSalario: " << t1->getSalario() << endl << endl;
    //Pag semanal = 40 * 34 + (20 * 1,5) * 34

    cout << "Nome: " << t2->getNome() << "\nPagamento semanal: " << t2->calcularPagamentoSemanal(40) << "\nSalario: " << t2->getSalario() << endl;
    //Pag semanal = 4500 / 4

    return 0;
}

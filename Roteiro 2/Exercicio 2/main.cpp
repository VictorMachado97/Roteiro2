#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco(1433, "Coronel Gomes", "Bessa", "Paraiba", "João Pessoa", "58038-345");
    Endereco e2 = Endereco();

    e2.setNumero(1841);
    e2.setRua("Valdemar Galdino Naziazeno");
    e2.setBairro("Manaira");
    e2.setEstado("Paraiba");
    e2.setCidade("Joao Pessoa");
    e2.setCep("58038-480");

    Pessoa p1 = Pessoa("Victor Machado", e1, "(83) 99638-1001");
    Pessoa p2 = Pessoa();

    p2.setNome("Victor");
    p2.setEndereco(e2);
    p2.setTelefone("(83) 99638-1001");

    cout << p1.toString() << endl;
    cout << p2.toString();

    return 0;
}

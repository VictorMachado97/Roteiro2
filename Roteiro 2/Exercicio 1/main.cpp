#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido p1(1,2,7.0, "cheese bacon");
    Pedido p2(2,1,10.0, "cheese salada");
    Pedido p3(3,1,12.50, "cheese milho");

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;

    MesaDeRestaurante m1;
    MesaDeRestaurante m2;

    m1.AdicionaAoPedido(p1);
    m1.AdicionaAoPedido(p2);

    m2.AdicionaAoPedido(p2);
    m2.AdicionaAoPedido(p2); 
    m2.AdicionaAoPedido(p3);

    cout << "Total da mesa 1: " << m1.CalculaTotal() << endl;
    cout << "Total da mesa 2: " << m2.CalculaTotal() << endl << endl;

    RestauranteCaseiro r1;

    r1.AdicionaMesa(m1);
    r1.AdicionaMesa(m2);

    cout << "Total do restaurante: " << r1.CalculaTotalRestaurante() << endl;
    r1.AdicionaAoPedido(p1, 2);

    cout << "Total do restaurante apos novo pedido: " << r1.CalculaTotalRestaurante() << endl;

    return 0;
}

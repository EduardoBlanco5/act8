#include <iostream>
#include "Computadora.h" 
#include "Laboratorio.h"

using namespace std;

int main (){
    Computadora C01 = Computadora("HP", "Windows", 580.0, 8);

    Computadora C02;
    C02.setNombre("MAC");
    C02.setSistema("IOS");
    C02.setDisco(500.0);
    C02.setRam(8);

    Laboratorio lb;
    lb.agregarFinal(C01);
    lb.agregarFinal(C02);

    lb.mostrar();

   /* cout << C02.getNombre() << endl;
    cout << C02.getSistema() << endl;
    cout << C02.getDisco() << endl;
    cout << C02.getRam() << endl; 

    cout << C01.getNombre() << endl;*/

    system("pause");
    return 0;
}
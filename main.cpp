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
    //lb.agregarFinal(C01);
    //lb.agregarFinal(C02);
    lb << C01 << C02;

    //cout << C01;

    Computadora C03;
    cin >> C03;
    lb << C03;

    lb.mostrar();
    lb.respaldar_tabla();
    lb.respaldar(); //Linea por linea

    system("pause");
    return 0;
}
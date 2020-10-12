#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora{
private:
    string NombreEquipo;
    string SistemaOp;
    float DiscoD;
    int MemoriaR;
public:
    Computadora();
    Computadora(const string &NombreEquipo, const string &SistemaOp, float DiscoD, int MemoriaR);
    void setNombre(const string &v);
    string getNombre();
    void setSistema(const string &v);
    string getSistema();
    void setDisco(float v);
    float getDisco();
    void setRam(int v);
    int getRam();

};



#endif
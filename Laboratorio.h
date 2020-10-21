#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"
class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarFinal(const Computadora &C);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &lb, const Computadora &C)
    {
        lb.agregarFinal(C);

        return lb;
    }
};

#endif 
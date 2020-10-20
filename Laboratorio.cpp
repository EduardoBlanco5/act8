#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &C)
{
    if(cont < 5){
        arreglo[cont] = C;
        cont++;
    } else{
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &C = arreglo[i];
        cout << C;
        /*cout << "Nombre del Equipo: " << C.getNombre() << endl;
        cout << "Sistema Operativo: " << C.getSistema() << endl;
        cout << "Memoria en Disco Duro: " << C.getDisco() << endl;
        cout << "Memoria Ram: " << C.getRam() << endl;
        cout << endl;*/
    }
    
}
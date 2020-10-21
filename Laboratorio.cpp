#include "Laboratorio.h"
#include <fstream>

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
    cout << left;
    cout<< setw(15)<< "NombreEquipo";
    cout << setw(15)<< "SistemaOp";
    cout << setw(9)<< "DiscoD"; 
    cout << setw(9)<< "MemoriaR"; 
    cout << endl;
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

void Laboratorio::respaldar_tabla()
{
    
    ofstream archivo("Computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(15)<< "NombreEquipo";
        archivo << setw(15)<< "SistemaOp";
        archivo << setw(9)<< "DiscoD"; 
        archivo << setw(9)<< "MemoriaR"; 
        archivo << endl;
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &C = arreglo[i];
            archivo << C;
        }
    }
    archivo.close();
    
}

void Laboratorio::respaldar()
{
    
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &C = arreglo[i];
            archivo << C.getNombre() << endl;
            archivo << C.getSistema() << endl;
            archivo << C.getDisco() << endl;
            archivo << C.getRam() << endl;
        }
    }
    archivo.close();
    
}
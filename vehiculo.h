/*
 * Esta clase define un objeto de tipo vehiculo que actúa como la clase
 * base abstracta del sistema. Contiene los atributos y métodos generales 
 * de cualquier auto sin importar su tipo va a tener y establece la estructura
 * polimórfica para que las clases hijas puedan calcular sus precios de renta
 * específicos e imprimir sus propios resúmenes.
 */


#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;

class vehiculo {
protected:
    string idVehiculo;
    string marca;
    string modelo;
    double costoDia;
    bool estaRentado;

public:
    vehiculo();
    vehiculo(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado);
    virtual ~vehiculo() {}

    virtual double calcularPrecioRenta(int dias, double km, int edadConductor) = 0;
    virtual void imprimirResumen() = 0;

    string getIdVehiculo();
    bool getEstaRentado();
    void setEstaRentado(bool _estaRentado);
};

#endif

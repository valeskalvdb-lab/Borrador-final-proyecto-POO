/**
 * Esta clase define un objeto de tipo autoDeportivo que hereda  
 * de la clase vehiculo. Representa a los vehículos de gama alta
 * y almacena el costo de su seguro base, además de que se 
 * un cargo extra de protección sobre el precio total de la renta si 
 * el conductor asignado es menor de 25 años.
 */
#ifndef AUTODEPORTIVO_H
#define AUTODEPORTIVO_H

#include <iostream>
#include "vehiculo.h"
using namespace std;

class autoDeportivo: public vehiculo{
    private:
        double seguroCosto;
    public:
        autoDeportivo();
        autoDeportivo(string _idVehiculo, string _marca, string _modelo, double _costoDia, bool _estaRentado, double _seguroCosto);
        double calcularPrecioRenta(int dias, double km, int edadConductor) override;
        void imprimirResumen() override;
};

#endif

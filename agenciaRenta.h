/**
 * Esta clase define un objeto de tipo autoCompacto que hereda directamente 
 * de la clase vehiculo. Representa a los autos ideales para la ciudad y 
 * añade un atributo para controlar el límite de kilometraje permitido; 
 * implementa las operaciones para calcular los kilómetros excedidos y aplicar 
 * los cargos adicionales correspondientes al precio final de la renta.
 */
#ifndef AGENCIARENTA_H
#define AGENCIARENTA_H

#include <iostream>
#include <vector>
#include <string>
#include "vehiculo.h"

using namespace std;

class agenciaRenta {
    private:
    vector<vehiculo*> flotaCompactos;
    vector<vehiculo*> flotaSUVs;
    vector<vehiculo*> flotaDeportivos;

    bool intentarRentar(vector<vehiculo*>& flota, const string& id);
    bool intentarDevolver(vector<vehiculo*>& flota, const string& id, int dias, double km, int edadConductor);

    public:
    ~agenciaRenta();
    void agregarCompacto(vehiculo* v);
    void agregarSUV(vehiculo* v);
    void agregarDeportivo(vehiculo* v);
    void vehiculosDisponibles();
    void rentarVehiculo(string id);
    void devolverVehiculo(string id, int dias, double km, int edadConductor);
};

#endif

#ifndef __ALMACEN_HPP__
#define __ALMACEN_HPP__

#include <iostream>
using namespace std;

const int SALIR=0;

typedef struct producto {
    
    string tipo_producto;
    string marca;
    int cantidad;
    float precio;
} producto_t;

void stock_deposito();

 void ingreso_producto (int &cant_producto);
 
 void actualizacion_precio (float &nuevo_precio);
 
 #endif /*__ALMACEN_HPP__*/

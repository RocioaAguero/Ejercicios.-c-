#ifndef __ALMACEN2_HPP__
#define __ALMACEN2_HPP__

#include <iostream>
using namespace std;

//quiero hacer struct con vectores
typedef struct producto {
    
    string tipo_producto;
    string marca;
    int cantidad;
    float precio;
    
} producto_t;

int cant_deposito();

string comprar_prod();//declaracion de la funcion comprar_produ

void modificar_cant();

#endif /*__ALMACEN2_HPP__*/

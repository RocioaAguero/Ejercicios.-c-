#include "almacen.hpp"

/*quiero que muestre todos los productos*/
void stock_deposito(){
    string productos_deposito[10] = {"Fideos","Arroz","Polenta","Lentejas","Harina","Sal","Aceite","Vinagre","Garbanzos","Arvejas"};
    cout << " \nListado de Productos en deposito \n" << productos_deposito[7] << endl;
    
}

 void ingreso_producto (int &cant_producto){
   
    cout << " \nIngreso nueva cantidad del producto \n" << endl;
    cout << "SALIR [0]"<<endl;
    cin >> cant_producto;
}

 void actualizacion_precio (float &nuevo_precio){
    
    cout << " \nIngrese Precio actualizado \n" << endl;
    cout << "SALIR [0]"<<endl;
    cin >> nuevo_precio;
}

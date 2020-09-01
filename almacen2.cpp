#include "almacen2.hpp"


int mostrar_menu(){
    
    int opcion;
    
    cout << "\nActualizar stock\n"<<endl;
    cout << "\nACTUALIZAR CANTIDAD [1]\n"<<endl;
    cout << "\nAumentar stock [3]\n"<<endl;
    cout << "\nNO CONTINUAR SIGUIENTE ITEM [2]\n"<<endl;
    cout << "\nSALIR [0]\n"<<endl;
    cin >> opcion;
    
    return opcion;
}

producto_t ejecutar_opc(int opcion, producto_t producto){
    switch(opcion){
        case 1:
            producto.cantidad = modificar_cant();
            break;
        case 2: 
            //opcion 
            break;
        case 3: 
            //opcion 3
            producto.cantidad = producto.cantidad + comprar_prod();
            break;
        default:
            cout << "Opcion no aceptada"<<endl;
    }
    return producto;
}


int modificar_cant(){
    int act_cant;
    cout << "\nNueva Cantidad\n"<<endl;
    cin >> act_cant;    
    
    return act_cant;
}



int comprar_prod(){
    
    int cantidad_comprada;
    cout << "cantidad a comprar"<<endl;
    cin >> cantidad_comprada;
    
    return cantidad_comprada;
}

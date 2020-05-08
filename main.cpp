#include <iostream>

using namespace std;

int main()
{
    //VARIABLES DEL PROGRAMA
    bool ban=false;
    int opcion1;
    //VARIABLES PARA INGRESAR COMO ADMINISTRADOR
    int pass;
    //VARIABLES PARA AGREGAR PRODUCTOS
    int add;
    int id;
    int nombreproducto;
    int unidades;
    int costo;
    //VARIABLES PARA COMBOS
    int combo1=0;
    int combo2=0;
    int combo3=0;
    //VARIABLES PARA MOSTRAR EL INVENTARIO
    int cantidadunidades=1;
    int id1;
    int nombreproducto1;
    int unidades1;
    int costo1;
    //VARIABLES PARA INGRESAR COMO USUARIO
    int cedula;
    int clave;
    cout << "BIENVENIDO AL PROCESO DE ATOMATICO DE COMPRA Y VENTA DE COMIDAS ROYAL MOVIES" << endl;
    //DIA 1, CREANDO LA INTERFAZ DE USUARIO Y ADMINISTRADOR
    while (ban==false)
    {
        cout<<endl;
        cout<<"PARA ACCEDER COMO USUARIO PRESIONE (1): "<<endl;
        cout<<endl;
        cout<<"PARA ACCEDER COMO ADMINISTRADOR PRESIONE (2)"<<endl;
        cout<<endl;
        cin>>opcion1;
        if (opcion1==1)
        {
            cout<<"Ingrese su cedula:  "<<endl;
            cin>>cedula;
            cout<<"Ingrese su clave:  "<<endl;
            cin>>clave;
            cout<<"BIENVENIDO! "<<endl;

            //AQUÍ SE VAN A MOSTRAR LOS COMBOS DISPONIBLES


            //AQUÍ SE VA A PODER SELECCIONAR EL COMBO

            //AQUÍ SE VA A SACAR EL PRECIO DEL COMBO SELECCIONADO

            //AQUÍ SE VA A REALIZAR EL PAGO

            //AQUÍ SE VA A ACTUALIZAR EL INVENTARIO

            //AQUÍ SE VA A ACTUALIZAR LA DISPONIBILIDAD DE LOS COMBOS
        }
        if (opcion1==2)
        {

            cout<<"Ingrese su contrasena de administrador: "<<endl;
            cin>>pass;
            cout<<endl;
            cout<<"PARA MOSTRAR PRODUCTOS PRESIONE (1): "<<endl;
            cout<<endl;
            cout<<"PARA AGREGAR PRODUCTOS AL INVENTARIO PRESIONE (2):  "<<endl;
            cout<<endl;
            cout<<endl;
            cin>>add;
            if (add==1)
            {   // AQUÍ SE VA A EXTRAER LA INFORMACIÓN DEL INVENTARIO

                //MOSTRANDO EL INVENTARIO DE PRODUCTOS

                cout<<"ID ";
                cout<<"            Producto ";
                cout<<"          Cantidad ";
                cout<<"     Costo ";
                while (cantidadunidades!=0)
                {
                    cout<<id1;
                    cout<<"            ";
                    cout<<nombreproducto1;
                    cout<<"           ";
                    cout<<unidades1;
                    cout<<"     ";
                    cout<<costo1;
                    cout<<endl;
                    cantidadunidades-=1;
                }

            }

            if (add==2)
            {
                //AGREGANDO AL INVENTARIO

                //SE ABRE EL ARCHIVO DEL INVENTARIO

                //SE AGREGA EL PRODUCTO EN ORDEN
                cout<<endl;
                cout<<"INGRESE EL ID DEL PRODUCTO: "<<endl;
                cin>>id;
                cout<<endl;
                cout<<"INGRESE EL NOMBRE DEL PRODUCTO: "<<endl;
                cin>>nombreproducto;
                cout<<endl;
                cout<<"INGRESE LA CANTIDAD DE UNIDADES DISPONIBLES: "<<endl;
                cin>>unidades;
                cout<<endl;
                cout<<"INGRESE EL COSTO DEL PRODUCTO: "<<endl;
                cin>>costo;
                cout<<endl;
                cout<<"Producto agregado al inventario exitosamente! "<<endl;
            }


            }

    }

    return 0;
}


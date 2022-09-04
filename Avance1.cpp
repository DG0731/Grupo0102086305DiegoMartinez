#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int nA, opcion;
    float precio, impuesto, total;
    string articulo, nombreA, ano, clasificacion, caracteristicas, descripcion, genero;
    
    
    cout <<"\t ***Bienvenido a la tienda de Videojuegos*** \n";
    cout <<"1.Agregar articulo \n 2.Modificar articulo \n 3.Eliminar articulo \n 4. Lista de articulo \n 5.Limpiar pantalla \n 6.Salir \n";
    cin >> opcion;
    
    switch (opcion)
    {
        case 1:
        cout <<"Que numero de articulo es? \n";
        cin >> nA;
        cout <<"Que nombre tiene el articulo? \n";
        cin.ignore();
        getline(cin, nombreA);
        cout <<"Fecha de salida \n";
        cin >> ano;
        cout <<"Clasificacion del articulo \n";
        cin >> clasificacion;
        cout <<"Caracteristicas del articulo \n";
        cin >> caracteristicas;
        cout <<"Detalles del articulo \n";
        cin.ignore();
        getline(cin, descripcion);
        cout <<"Genero del articulo \n";
        cin >> genero;
        cout <<"Precio del articulo \n";
        cin >> precio;
        cout <<"Impuesto \n";
        cin >> impuesto;
        cout <<"Total \n";
        cin >> total;
        return main();
        break;
    
        case 2: //
        break;

        case 3://Eliminar Articulo
        break;

        case 4://Lista de Articulos
        break;
        
        case 5: //Limpiar Pantalla
        system("cls");
        return main();
        break;
        
        case 6: //Salir
        cout << "Gracias por utilizar el programa \n";
        break;
        
        default:
        cout << "ingrese una opcion correcta \n";
        return main();
        
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //Villa Lopez Sebastian 203


     //declaro variables para la fecha de nacimiento
    string numCuenta, nombre ,  apellidoPaterno , apellidoMaterno, gpo, carrera;
    string numCuentaLetra[8];
    string vector_datos[5];

    //Aqui se piden todos los datos y los almacena en las variables
    cout << "Ingrese su numero de cuenta ";
    getline(cin, numCuenta);
    cout << "Escriba su Apellido Paterno: ";
    getline(cin, apellidoPaterno);
    cout << "Escriba su apellido Materno: ";
    getline(cin, apellidoMaterno);
    cout << "Escriba su nombre: " ;
    getline(cin, nombre);
    cout << "Ingrese su grupo: ";
    getline(cin, gpo);
    cout << "ingrese su carrera: ";
    getline(cin, carrera);

   vector_datos[0] = numCuenta;
   vector_datos[1] = apellidoPaterno;
   vector_datos[2] = apellidoMaterno;
   vector_datos[3] = nombre;
   vector_datos[4] = gpo;
   vector_datos[5] = carrera;

   for(int i = 0; i <= 5; i++){
    cout << vector_datos[i];
   }
    cout << " \n";


   for(int i = 0; i <= 8; i++){
        switch(numCuenta[i])
        {
        case '1':
            cout << "uno ";
            break;
        case '2':
            cout << "dos ";
            break;
        case '3':
            cout << "tres ";
            break;
        case '4':
            cout << "cuatro ";
            break;
        case '5':
            cout << "cinco ";
            break;
        case '6':
            cout << "seis ";
            break;
        case '7':
            cout << "siete ";
            break;
        case '8':
            cout << "ocho ";
            break;
        case '9':
            cout << "nueve ";
            break;
        }
   }
    cout << "Es el numero de cuenta del " << vector_datos[3] << " " << vector_datos[1] << " " << vector_datos[2] << "\n";
    cout << "del grupo " << vector_datos[4] << "de la carrera de ingeneria " << vector_datos[5];

    cout << "\n El total de caracteres con espacios sin el texto adicional es: ";
    cout << (numCuenta.size() + vector_datos[1].size() + vector_datos[2].size() + vector_datos[3].size() + vector_datos[4].size() + vector_datos[5].size()) ;

    return 0;
}

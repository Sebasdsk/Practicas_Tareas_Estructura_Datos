#include <iostream>

using namespace std;

int main()
{
    //Villa Lopez Sebastian 203
    //Programa que pida datos personales de los alumnos de software y que calcule longitud de las cadenas

    int dia {0},  year {0}; //declaro variables para la fecha de nacimiento
    string nombre , mes, apellidoPaterno , apellidoMaterno, seriePeliculaFav; //declaro variables para nombre, apellidos y serie favorita o pelicula
    //Aqui se piden todos los datos y los almacena en las variables

    cout << "Escriba su Apellido Paterno: ";
    cin >> apellidoPaterno;
    cout << "Escriba su apellido Materno: ";
    cin >> apellidoMaterno;
    cout << "Escriba su nombre: " ;
    cin >> nombre;
    cout  << "Escriba el dia en que nacio: ";
    cin >> dia;
    cout  << "Escriba el mes en que nacio: ";
    cin >> mes;
    cout << "Escriba el año en que nacio: ";
    cin >> year;
    cout << "Cual es tu pelicula o serie favorita? " ;
    cin >> seriePeliculaFav;

    // Aqui muestra todos los datos ingresados, en pantalla
    cout << '\n' << "Los Datos que usted ingreso: " << endl;
    cout << '\n' << "Apellido Paterno: " << apellidoPaterno;
    cout << '\n' << "Apellido Materno: " << apellidoMaterno;
    cout << '\n' << "Nombre: " << nombre;
    cout << '\n' << "Dia en que nacio: " << dia;
    cout << '\n' << "Mes en que nacio: " << mes;
    cout << '\n' << "Año en que nacio: " << year;
    cout << '\n' << "Pelicula o Serie favorita: " << seriePeliculaFav << endl;

    //Muestra que tan largas son las cadenas que se utilizaron
    //Notese que en las variables de string se usa una funcion llamada size que te da la longitud de la cadena
    cout << '\n' << "Su nombre tiene: " << nombre.size() << " Caracteres";
    cout << '\n' << "Su apellido paterno tiene: " << apellidoPaterno.size() << " Caracteres";
    cout << '\n' << "Su apellido materno: " << apellidoMaterno.size() << " Caracteres";
    //Aqui es cuando se hace la suma de las longitudes de las cadenas utilizadas
    cout << '\n' << "En total son: " << (nombre.size() + apellidoPaterno.size() + apellidoMaterno.size()) << " Caracteres" << endl;

    //Muestra la primera y segunda letra del nombre, apellido paterno y materno
    cout << '\n' << "Primera y segunda letra del apellido paterno: " << apellidoPaterno[0] << apellidoPaterno[1];
    cout << '\n' << "Primera y segunda letra del apellido materno: "  << apellidoMaterno[0] << apellidoMaterno[1];
    cout << '\n' << "Primera y segunda letra del nombre: " << nombre[0] << nombre[1] << endl;
    return 0;
}

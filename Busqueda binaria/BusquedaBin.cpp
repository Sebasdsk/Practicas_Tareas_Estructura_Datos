#include <iostream>
#include <conio.h>

int main()
{
    int nums[] = {10, 18, 23, 29, 32, 40, 47, 51, 63};
    int clave,bajo,alto,mitad,valorMitad;
    char band = 'F';

    std::cout << "Ingrese numero a buscar: ";
    std::cin >> clave;
    //Algoritmo para la busqueda
    bajo = 0;
    alto = 9;
    while (bajo <= alto)
    {
        
        mitad = ((bajo + alto)/2);

        if (nums[mitad] == clave)
        {
            std::cout << "Ha encontrado el numero: " << nums[mitad] << " En la Posicion " << mitad << '\n';
            break;
        }
        if (nums[mitad] > clave)
        {
            alto = mitad;
            mitad = ((bajo + alto)/2);
        }
        if(nums[mitad] < clave)
        {
            bajo = mitad;
            mitad = ((bajo + alto)/2);
        }
    }
    return 0;

}
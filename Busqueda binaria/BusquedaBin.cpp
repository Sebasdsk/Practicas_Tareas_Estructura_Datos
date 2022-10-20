#include <iostream>
#include <conio.h>

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
int busquedaBin(int num[], int clave);

int main()
{
    int nums[] = {10, 18, 23, 29, 32, 40, 47, 51, 63};
    int clave{};
   
    

    std::cout << "Ingrese numero a buscar: ";
    std::cin >> clave;
    //Algoritmo para la busqueda
    
    if (busquedaBin(nums,clave) == -1 )
    {
        std::cout << "No se encontro el numero dentro del arreglo";
    }
    else
    {
        std::cout << "Se encontro el numero: " << clave << " en la posicion: " << busquedaBin(nums,clave);
    }
    

    
    #if 0
    bajo = 0;
    alto = GetSize(nums);
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
    #endif 
    return 0;
}

int busquedaBin(int num[], int clave)
{
    int central, bajo, alto;
    int valorCentral;
    bajo = 0;
    alto = sizeof(num);
    while (bajo <= alto)
    {
        central = (bajo + alto)/2;
        valorCentral = num[central];
        if (clave == valorCentral)
        {

            return central;
        }
        else if (clave < valorCentral)
        {
            alto = central -1;
        }
        else
        {
            bajo = central + 1;
        }
    }
    return -1;
}


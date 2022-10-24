#include <iostream>
#include <conio.h>
#include <algorithm>

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
int busquedaBin(int num[], int clave);
void ordenar (int arreglo[]);
void busquedaSec(int num[], int clave);

int main()
{
    int nums[200] = {};
    int clave{}, opc;

     for (int j = 0; j <= 200; j++)     // Ciclo que rellena los espacios de numeros aleatorios
    {
        nums[j] = 1 + rand( )% 500;
    }
    ordenar(nums);                      // Funcion que ordena los elementos dentro del arreglo
    
    
    std::cout << "Bienvenido al programa: \n";
    do{ 
    std::cout << "Que desea realizar? \n";
    std::cout << "1.- Busqueda Binaria: \n2.- Busqueda Lineal: \n";
    std::cin >> opc;

        
        switch (opc)
        {
        case 1:
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
            break;
        case 2:
            std::cout << "Ingrese numero a buscar: ";
            std::cin >> clave;
            busquedaSec(nums,clave);
            break;
        
        default:
         std::cout << "Ingrese una opcion valida: \n";
            break;
        }
    }while ((opc != 1) && (opc != 2));
    
 
    return 0;
}

int busquedaBin(int num[], int clave)
{
    int central, bajo, alto;
    int valorCentral;
    bajo = 0;
    alto = 200 - 1;
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

void busquedaSec(int num[], int clave)
{
    for (int i = 0; i <= 200; i++)
    {
        if(clave == num[i])
        {
            std::cout << "Se encontro el numero! " << num[i] << "En la posicion: " << i;
            break;
        }
        else
        {
            std::cout << "No se encontro el numero ";
        }
    }
    
}

void ordenar (int arreglo[]) 
{
   int i, j, temporal;
 
   for (i = 200 - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (arreglo[j] > arreglo[j + 1]) {
            temporal = arreglo[j];
            arreglo[j] = arreglo[j + 1];
            arreglo[j + 1] = temporal;
         }
}
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <chrono>

using namespace std::chrono;

 
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
bool verificar(int num, int arreglo[]);
int busquedaBin(int num[], int clave);
void ordenar (int arreglo[]);
int busquedaSec(int num[], int clave);
bool reintentar();

int main()
{
    bool salir = false;
    srand(time(NULL));
    int nums[200] = {};
    int clave{}, opc, num;


     for (int j = 0; j <= 200; j++)     // Ciclo que rellena los espacios de numeros aleatorios
    {
        while (verificar(num,nums))
        {
            num = 1 + rand( )% 500;
        }
        nums[j] = num;
    }
    ordenar(nums);                      // Funcion que ordena los elementos dentro del arreglo
    
    
    std::cout << "Bienvenido al programa: \n";
    do{ 
    std::cout << "Que desea realizar? \n";
    std::cout << "1.- Busqueda Binaria: \n2.- Busqueda Lineal: \n3.- Salir \n";
    std::cin >> opc;

        
        switch (opc)
        {
        case 1: //Busqueda binaria
            std::cout << "Ingrese numero a buscar: ";
            std::cin >> clave;
            //Algoritmo para la busqueda
            if (busquedaBin(nums,clave) == -1 )
            {
                std::cout << "No se encontro el numero dentro del arreglo \n";
                salir = reintentar();
            }
            else
            {
                auto start = high_resolution_clock::now();
                std::cout << "Se encontro el numero: " << clave << " en la posicion: " << busquedaBin(nums,clave) << "\n";
                auto stop = high_resolution_clock::now();           //desde aqui se deja de tomar en cuenta el tiempo
                auto duration = duration_cast<microseconds>(stop - start);  //se calcula la duracion
                std::cout << "Tiempo de duracion por la funcion: " << duration.count() << " Milisegundos \n \n"; 
                salir = reintentar();
            }
            break;
        case 2: //Busqueda Secuencial
            std::cout << "Ingrese numero a buscar: ";
            std::cin >> clave;
            if(busquedaSec(nums,clave) == -1)
            {
                std::cout << "No se encontro el numero dentro del arreglo \n";
            }
            else
            {
                auto start = high_resolution_clock::now();
                std::cout << "Se encontro el numero: " << clave << " en la posicion: " << busquedaSec(nums,clave) << "\n";
                auto stop = high_resolution_clock::now();           //desde aqui se deja de tomar en cuenta el tiempo
                auto duration = duration_cast<microseconds>(stop - start);  //se calcula la duracion
                std::cout << "Tiempo de duracion por la funcion: " << duration.count() << " Milisegundos \n \n";
                salir = reintentar(); 
            }
            break;
        case 3:
        salir = true;
        break;
        }
    }while (salir = true);
    
 
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

int busquedaSec(int num[], int clave)
{

    
    for (int i = 0; i <= 200; i++)
    {
        if(clave == num[i])
        {
           
            return i;
        }
    }
    return -1;
    
}

void ordenar (int arreglo[]) 
{
   int i, j, temporal;
 
   for (i = 200 - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (arreglo[j] > arreglo[j + 1]) {  //Si el numero actual del arreglo es mayor al numero que le sigue
            temporal = arreglo[j];           //se intercambian los valores
            arreglo[j] = arreglo[j + 1];     
            arreglo[j + 1] = temporal;
         }
}

bool verificar(int num, int arreglo[])
{
    for(int i = 0; i < 200; i++)
    {
        if (num == arreglo[i]){
            return true;
        }
    }
    return false;
}

bool reintentar()
{
    char confirmacion;
    std::cout<< "\nDesea Volver a intentarlo? ";
    std::cin>> confirmacion;
    if (confirmacion == 'n' || confirmacion == 'N')
    {
        return true;
    }
    return false;
    
}
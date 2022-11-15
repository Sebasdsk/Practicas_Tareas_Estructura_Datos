#include <iostream>


const int tam_pila = 5;  //declaramos una constante que es el tamaño de la pila

struct stack
{
    int tope;
    int elemento[tam_pila];
};

stack pila;

void menu()
{
    std::cout << "\n Que desea hacer? \n";
    std::cout << "1.Mostrar Pila \n2.Agregar Elementos \n3.Quitar Elementos \n4.Salir \n";
}

void iniciar()       //Funcion que inicia la pila
{
    pila.tope = -1;

    for(int i = 0; i < tam_pila; i++)
    {
        pila.elemento[i] = 0;
    }
}

bool vacio()
{
    return pila.tope == -1; //regresa una comparacion que puede ser verdadera o falsa
}

bool lleno()
{
    return pila.tope == tam_pila -1; //
}

void agregar(int x)
{
    if (lleno())
    {
        std::cout << "Pila Llena " << std::endl;
    }
    else
    {
        pila.tope++;
        pila.elemento[pila.tope] = x;
        std::cout << "Elemento " << x << " Agregado exitosamente \n";
    }
}

void quitar()
{
    if (vacio())
    {
        std::cout << "Pila Vacia " << std::endl;
    }
    else
    {
        int tmp = pila.elemento[pila.tope];
        pila.elemento[pila.tope] = 0;
        pila.tope--;
    }
}

void mostrar()
{
    if (vacio())
    {
        std::cout << "Pila Vacia: ";
    }
    else if (lleno())
    {
        std::cout << "La pila esta llena \nEstos son los datos: \n";
        for(int i = 0; i <= pila.tope; i++)
        {
            std::cout << "Espacio ["<<i<<"]: " <<pila.elemento[i] << std::endl;
        }
    }
    else
    {
        for(int i = 0; i <= pila.tope; i++)
        {
            std::cout << "Espacio ["<<i<<"]: " <<pila.elemento[i] << std::endl;
        }
    }
}



int main()
{
    iniciar();
    int elemento, opc{0};
    std::cout << "Bienvenido: ";
    do
    {
        menu();
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            mostrar();
            
            break;
        case 2:
            std::cout << "Numero que desea ingresar: ";
            std::cin >> elemento;
            agregar(elemento);

            break;

        case 3:
            quitar();
            break;
            
        case 4: 
            return 0;
        default:
            std::cout << "Ingrese una opcion valida: ";
            break;
        }
    }while (opc != 4);
    system("PAUSE");
    return 0; 

}
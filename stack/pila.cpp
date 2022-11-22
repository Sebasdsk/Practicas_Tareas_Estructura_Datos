#include <iostream>



const int tam_pila = 5;  //declaramos una constante que es el tamaño de la pila

    int tope; //tope es la posicion que se va tomar en el vector de la pila
    int elemento[tam_pila];  //Declaramos el vector de la pila con el tamaño constante de tam_pila = 5

void mostrar();
void restante();

void menu()
{
    std::cout << "\n Que desea hacer? \n";
    std::cout << "1.Mostrar Pila \n2.Agregar Elementos \n3.Quitar Elementos \n4.Vaciar la pila \n5.Salir \n";
}

void iniciar()       //Funcion que inicia la pila y que a su vez vacia la pila
{
    tope = -1;

    for(int i = 0; i < tam_pila; i++)
    {
        elemento[i] = 0;
    }
    mostrar();
}

bool vacio()
{
    return tope == -1; //regresa una comparacion que puede ser verdadera o falsa
}

bool lleno()
{
    return tope == tam_pila -1; //regresa verdadero si la comparacion que si el tope es igual al tamaño de la pila - 1 
                                //el maximo del tope es 4 por como funcionan los vectores en c++ que se cuenta del 0 restando 1 al final del tamaño que vemos en codigo
}

void agregar(int x)
{
    if (lleno())
    {
        std::cout << "Pila Llena " << std::endl;
    }
    else
    {
        tope++;
        elemento[tope] = x;
        std::cout << "Elemento " << x << " Agregado exitosamente \n";
        mostrar();
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
        int tmp = elemento[tope];
        elemento[tope] = 0;
        tope--;
        std::cout << "El elemento ha sido removido exitosamente \n";
        mostrar();
    }
}

void mostrar()
{
    if (vacio())
    {
        std::cout << "Pila Vacia: ";
        restante();
    }
    else if (lleno())
    {
        std::cout << "La pila esta llena \nEstos son los datos: \n";
        for(int i = 0; i <= tope; i++)
        {
            std::cout << "Espacio ["<<i<<"]: " <<elemento[i] << std::endl;
        }
        
    }
    else
    {
        for(int i = 0; i <= tope; i++)
        {
            std::cout << "Espacio ["<<i<<"]: " <<elemento[i] << std::endl;
        }
        restante();
    }
}

void restante()
{
    std::cout <<"Quedan  " <<  tam_pila - (tope + 1) << " Espacios disponibles " << std::endl;
}


int main()
{
    iniciar();
    int usrElemento, opc{0};
    std::cout << "Bienvenido: ";
    do
    {
        std::cout << "\n";
        menu();
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            mostrar();
            
            
            break;
        case 2:
            std::cout << "Numero que desea ingresar: ";
            std::cin >> usrElemento;
            agregar(usrElemento);
            
            break;
        case 3:
            quitar();
            
            break;
            
        case 4: 
            iniciar();
            std::cout << "La pila se ha vaciado exitosamente \n";
            
            break;
        case 5:
            return 0;
        default:
            std::cout << "Ingrese una opcion valida: ";
            break;
        }
    }while (opc != 5);
    system("PAUSE");
    return 0; 

}

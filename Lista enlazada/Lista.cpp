#include <iostream>
#include <conio.h>

//Se crea la estructura para poder simular el nodo como tal, dentro de la estructura
//esta el elemento de la lista y su puntero
struct nodo{
            int dato;
            struct nodo *sgte;
           };

int main()
{ 
struct nodo NodoCabecera;
struct nodo *q;
int n;
NodoCabecera.sgte=NULL;

std::cout <<"Numero de elementos:";
std::cin >>n;

  for(int i=0;i<n;i++) // un ciclo que agrega elementos de forma ordenada a las listas
  {
    std::cout << "Elemento:"<< (i+1) <<std::endl;
    q=new(struct nodo);

    std::cin >> q->dato;
    q->sgte = NodoCabecera.sgte;
    NodoCabecera.sgte = q;
  }
    std::cout << std::endl <<"Listado:"<< std::endl;
    q=NodoCabecera.sgte;
    while(q!=NULL)
    {
    std::cout << q->dato << std::endl;
    q=q->sgte;
    }
    return 0;
}
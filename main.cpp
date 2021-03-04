#include <iostream>
#include "Quicksort.h"
#include "Imprimir.h"

using namespace std;
using namespace ordenamiento;
using namespace imprimir;

int main()
{
  int A[10]={88,-6,69,-33, 98,7,23,-5,0,100};

    cout<<"ALGORITMOS DE ORDENAMIENTO QUICKSORT"<<endl;

    cout<<endl<<"Arreglo original"<<endl;
    imprimirArreglo(A,10);

    cout<<endl;
  
    ordenar(A,0,9);
    cout<<endl;
    
    cout<<endl<<"Arreglo Ordenado"<<endl;
    imprimirArreglo(A,10);
    cout<<endl;
  return 0;
}






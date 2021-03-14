#include <iostream>
#include <fstream>
#include <iostream>
#include "Heapsort.h"

using namespace std;
using namespace ordenamiento;


int main()
{
  int A[100],n;
  ofstream archivo1;
  archivo1.open("heapsort",ios::app);
  cout<<"\n\t\tORDENAMINETO HEAPSORT";
  archivo1<<"\n\t\tORDENAMINETO HEAPSORT";
  cout<<"\nIngresa la cantidad de elementos del arreglo: ";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cout<<"\nElemento "<<i<<":";
    cin >> A[i];
  }

  cout<<"\nArreglo Desordenado\n";
  archivo1<<"\nArreglo Desordenado\n";
    for(int i=1;i<=n;i++)
  {
    cout<< "|"<<A[i]<< "|";
    archivo1<< "|"<<A[i]<< "|";
  }

  HeapSort(A,n);
  cout<<"\nArreglo Ordenado\n";
  archivo1<<"\nArreglo Ordenado\n";
    for(int i=1;i<=n;i++)
  {
    cout<< "|"<<A[i]<< "|";
    archivo1<< "|"<<A[i]<< "|";
  }
 archivo1.close();
  return 0;
}

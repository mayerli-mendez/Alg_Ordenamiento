#include <iostream>
#include <fstream>

using namespace std;

void HeapSort(int b[], int n);

int main()
{
  ofstream archivo1;
  archivo1.open("heapsort",ios::app);
  int A[100],n;
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
  archivo1<<"\nArreglo ordenadoO\n";
  for(int i=1;i<=n;i++)
  {
    cout<< "|"<<A[i]<< "|";
    archivo1<<"|"<<A[i]<< "|";
  }
  return 0;
 archivo1.close();
}

void HeapSort(int b[], int n)
{
    int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }

}

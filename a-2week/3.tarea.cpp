#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num, pension, dPrivado, dEstatal, pPrivado, pEstatal;
  pension = 350;
  dPrivado = (pension * 0.05);
  dEstatal = (pension * 0.2);
  cout << "Ingrese el numero del tipo de colegio de donde proviene: " << endl;
  cout << "1. Estatal" << endl;
  cout << "2. Privado" << endl;
  cin >> num;
  if (num == 1)
  {
    pEstatal = pension - dEstatal;
    cout << "Su pension sera la siguiente: " << pEstatal << " soles" << endl;
  }
  else
  {
    if (num == 2)
    {
      pPrivado = pension - dPrivado;
      cout << "Su pension sera la siguiente: " << pPrivado << " soles" << endl;
    }
    else
    {
      cout << "Ingrese un numero correcto." << endl;
    }
  }
  return 0;
}

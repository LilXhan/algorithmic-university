#include <iostream>
using namespace std;

int main()
{
  int numHijos, bono, edadHijos, condicion, num;
  cout << "Ingrese el numero de hijos: " << endl;
  cin >> numHijos;
  cout << "Ingrese una opcion:" << endl;
  cout << "1. Soltera" << endl;
  cout << "2. Casada" << endl;
  cout << "3. Viuda" << endl;
  cin >> num;
  if (numHijos < 4)
  {
    bono = 760;
    if (num == 2 || 3)
    {
      bono = 760 + (numHijos * 150);
      cout << bono << endl;
      ;
    }
    else
    {
    }
  }
  else if (numHijos < 7)
  {
    bono = 920;
  }
  else if (numHijos > 7)
  {
    bono = 1250;
  }
  else
  {
    cout << "Ingrese un numero valido de hijos." << endl;
  }
}

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Ingrese un numero del 1 al 4: " << endl;
  cin >> num;
  if (num == 1 || num == 2 || num == 3 || num == 4)
  {
    if (num == 1)
    {
      cout << "Verano" << endl;
    }
    else if (num == 2)
    {
      cout << "Otoño" << endl;
    }
    else if (num == 3)
    {
      cout << "Invierno" << endl;
    }
    else
    {
      cout << "Primavera" << endl;
    }
  }
  else
  {
    cout << "Ingrese un numero correcto" << endl;
  }
}

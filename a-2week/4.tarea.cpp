#include <iostream>
#include <math.h>
using namespace std;

void verificacion(int bono, int numHijos)
{
  int num;
  cout << "Ingrese una opcion:" << endl;
  cout << "1. Soltera" << endl;
  cout << "2. Casada" << endl;
  cout << "3. Viuda" << endl;
  cin >> num;
  if (num == 1 || num == 2)
  {
    cout << "Su bono es de " << bono << " soles." << endl;
  }
  else if (num == 3)
  {
    int numEdadEscolar;
    cout << "¿De los " << numHijos << " hijo/s que posee cuantos estan en edad escolar?" << endl;
    cin >> numEdadEscolar;
    if (numEdadEscolar)
    {
      if (numEdadEscolar <= numHijos && 0 < numEdadEscolar)
      {
        bono = bono + (150 * numEdadEscolar);
        bono = bono + 500;
        cout << "Su bono es de " << bono << " soles" << endl;
      }
      else
      {
        cout << "Ingrese un numero correcto." << endl;
      }
    }
    else
    {
      cout << "Ingrese un numero correcto." << endl;
    }
  }
  else
  {
    cout << "Ingrese un numero correcto." << endl;
  }
}

int main()
{
  int numHijos;
  cout << "Ingrese el numero de hijo/s: " << endl;
  cin >> numHijos;
  if (numHijos && numHijos > 0)
  {
    if (numHijos < 4)
    {
      verificacion(760, numHijos);
    }
    else if (numHijos < 7)
    {
      verificacion(920, numHijos);
    }
    else
    {
      verificacion(1250, numHijos);
    }
  }
  else
  {
    cout << "Ingrese un numero de hijo/s valido" << endl;
  }
}

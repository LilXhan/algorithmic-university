#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Ingrese 2 numeros:" << endl;
  cin >> a, cin >> b;
  if (a)
  {
    if (a > 0)
    {
      cout << a << " es positivo" << endl;
    }
    else
    {
      cout << a << " es negativo" << endl;
    }
  }
  else
  {
    cout << a << " es cero" << endl;
  }

  if (b)
  {
    if (b > 0)
    {
      cout << b << " es positivo" << endl;
    }
    else
    {
      cout << b << " es negativo" << endl;
    }
  }
  else
  {
    cout << b << " es cero" << endl;
  }
}

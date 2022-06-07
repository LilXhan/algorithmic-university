#include <iostream>
using namespace std;

int main()
{
  float a, b, media;
  cout << "Ingrese notas:" << endl;
  cin >> a >> b;
  media = (a + b) / 2;
  if (media >= 10.5)
  {
    cout << "Aprobado" << endl;
  }
  else
  {
    cout << "Desaprobado" << endl;
  }
  return 0;
}

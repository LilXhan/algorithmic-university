#include <iostream> /*calcular el area de un triangulo */
using namespace std;

int main()
{
  int base, altura, area;
  cout << "Ingrese valor de la base: ";
  cin >> base;
  cout << "Ingrese valor de la altura: ";
  cin >> altura;
  area = (base * altura) / 2;
  cout << "El area del triangulo es: " << area << "\n";
}

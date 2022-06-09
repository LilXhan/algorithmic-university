#include <iostream>
using namespace std;

int main()
{
  int ventas;
  float bono, sueldo, sueldoFinal;
  cout << "Ingrese las ventas del trabajador: " << endl;
  cin >> ventas;
  sueldo = 1050;
  bono = ventas * (sueldo * 0.02);
  sueldoFinal = sueldo + bono;
  if (ventas >= 10)
  {
    cout << "Felicidades usted gano un bono de " << bono
         << " soles por conseguir " << ventas << " ventas durante el mes!,"
         << " Su sueldo final es " << sueldoFinal << " soles." << endl;
  }
  else
  {
    cout << "No llego a la meta, intentalo el proximo mes!, su sueldo es el siguiente " << sueldo << endl;
  }
  return 0;
}

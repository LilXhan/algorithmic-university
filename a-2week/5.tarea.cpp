#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float consumo, dscto, importe, impuesto, consumoDsct, precioFinal;
  cout << "Ingrese monto de consumo: " << endl;
  cin >> consumo;
  impuesto = 0.18;
  if (consumo && consumo > 0)
  {
    if (consumo < 500)
    {
      dscto = consumo * 0.12;
      consumoDsct = consumo - dscto;
      impuesto = consumoDsct * impuesto;
      precioFinal = consumoDsct + impuesto;
      cout << "El importe total es: " << endl;
      cout << "----------------------\n"
           << "Valor Total de Compras: " << consumo << "\n"
           << "Descuento:            - " << dscto << "\n"
           << "Impuestos:              " << impuesto << "\n"
           << "----------------------\n"
           << "Total a Pagar: " << precioFinal << " soles" << endl;
    }
    else
    {
      dscto = consumo * 0.14;
      consumoDsct = consumo - dscto;
      impuesto = consumoDsct * impuesto;
      precioFinal = consumoDsct + impuesto;
      cout << "El importe total es: " << endl;
      cout << "----------------------\n"
           << "Valor Total de Compras: " << consumo << "\n"
           << "Descuento:            - " << dscto << "\n"
           << "Impuestos:              " << impuesto << "\n"
           << "----------------------\n"
           << "Total a Pagar: " << precioFinal << " soles" << endl;
    }
  }
  else
  {
    cout << "Ingrese un monto valido." << endl;
  }
}

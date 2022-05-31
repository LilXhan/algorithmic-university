#include <iostream>
using namespace std;

/* \n = salto de linea */

int main()
{
  int cantidad;
  float precio, precio_total;
  bool a = true;
  for (int i = 0; i < 1; i++)
  {
    cout << ">>>>>>>Menú<<<<<<<\n";
    cout << "1.Mouse S/.30.50\n";
    cout << "2.Teclado S/.80.00\n";
    cout << "3.Memoria RAM S/.50.80\n";
    cout << "4.Hard Disk 1TB S/.100.00\n";
    cout << "1.Monitos S/.550.00\n";
    cout << "0.Salir" << endl;
    cin >> i;
    switch (i)
    {
    case 1:
      cout << "Selecciono el mouse\n";
      precio = 30.5;
      break;
    case 2:
      cout << "Selecciono el Teclado\n";
      precio = 80;
      break;
    case 3:
      cout << "Selecciono la Memoria RAM\n";
      precio = 50.8;
      break;
    case 4:
      cout << "Selecciono el Hard Disk\n";
      precio = 100;
      break;
    case 5:
      cout << "Selecciono el monitor\n";
      precio = 550;
      break;
    case 0:
      cout << "Salir del sistema \n";
      a = false;
      break;
    default:
      cout << "Numero invalido\n";
      break;
    }
    if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5)
    {
      cout << "Ingrese la cantidad deseada\n";
      cin >> cantidad;
      precio_total = cantidad * precio;
      cout << "El precio total es: " << precio_total << " soles\n";
    }
  }
}
/* while (a)
 {
   cout << ">>>>>>>Menú<<<<<<<\n";
   cout << "1.Mouse S/.30.50\n";
   cout << "2.Teclado S/.80.00\n";
   cout << "3.Memoria RAM S/.50.80\n";
   cout << "4.Hard Disk 1TB S/.100.00\n";
   cout << "1.Monitos S/.550.00\n";
   cout << "0.Salir" << endl;
   cin >> i;
   switch (i)
   {
   case 1:
     cout << "Selecciono el mouse\n";
     precio = 30.5;
     break;
   case 2:
     cout << "Selecciono el Teclado\n";
     precio = 80;
     break;
   case 3:
     cout << "Selecciono la Memoria RAM\n";
     precio = 50.8;
     break;
   case 4:
     cout << "Selecciono el Hard Disk\n";
     precio = 100;
     break;
   case 5:
     cout << "Selecciono el monitor\n";
     precio = 550;
     break;
   case 0:
     cout << "Salir del sistema \n";
     a = false;
     break;
   default:
     cout << "Numero invalido\n";
     break;
   }
   if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5)
   {
     cout << "Ingrese la cantidad deseada\n";
     cin >> cantidad;
     precio_total = cantidad * precio;
     cout << "El precio total es: " << precio_total << "\n";
   }
 }
} */

#include <iostream>
using namespace std;

int main()
{
  int a, b, mul, sum, rest;
  float div;
  cout << "Ingrese 2 numeros:" << endl;
  cin >> a, cin >> b;
  sum = a + b;
  mul = a * b;
  div = a / b;
  rest = a - b;
  cout << "La resta es: " << rest << "\n"
       << "La suma es: " << sum << "\n"
       << "La division es: " << div << "\n"
       << "La multiplicacion es: " << mul << endl;
}

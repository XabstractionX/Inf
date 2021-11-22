#include <iostream>

using namespace std;

int a, b;
int
NWD (int a, int b)
{
  if (a > b)
    swap (a, b);

  for (int d = a; d >= 1; d--)
    if (a % d == 0 && b % d == 0)
          return d;
}

int
main ()
{
  cout << "Podaj liczbe a: ";
  cin >> a;
  cout << "Podaj liczbe b: ";
  cin >> b;
  cout << endl << "NWD(" << a << "," << b << ")= ";
  cout << NWD (a, b) << endl;
}
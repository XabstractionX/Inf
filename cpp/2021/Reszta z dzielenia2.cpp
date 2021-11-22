#include <iostream>

using namespace std;

int liczba;
int ResztaZDzielenia (int a, int b)
{
  return a % b;
}

int
main ()
{
  cout << "Podaj liczbe: ";
  cin >> liczba;
  cout << "Reszta z dzielenia " << liczba;
  cout << " przez 2 3 5 7 9 wynosi: " << endl;
  cout << ResztaZDzielenia (liczba, 2) << endl;
  cout << ResztaZDzielenia (liczba, 3) << endl;
  cout << ResztaZDzielenia (liczba, 5) << endl;
  cout << ResztaZDzielenia (liczba, 7) << endl;
  cout << ResztaZDzielenia (liczba, 9) << endl;

  return 0;
}

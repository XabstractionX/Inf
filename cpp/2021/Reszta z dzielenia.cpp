#include <iostream>

using namespace std;

int liczba; 
int ResztaZDzielenia (int a, int b)
{
  return a % b;
}

int main ()
{
  cout << "Podaj liczbe: ";
  cin >> liczba;
  cout << "Reszta z dzielenia " << liczba;
  cout << " przez 3 wynosi: ";
  cout << ResztaZDzielenia(liczba, 3) << endl;

  return 0;
}
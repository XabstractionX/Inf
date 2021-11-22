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
  cout << " przez 2 3 5 7 9 wynosi: " 
  << endl;
  cout << "-----------------------------"
  << endl;
  cout << ResztaZDzielenia (liczba, 2);
  cout << ",";
  cout << ResztaZDzielenia (liczba, 3);
  cout << ",";
  cout << ResztaZDzielenia (liczba, 5);
  cout << ",";
  cout << ResztaZDzielenia (liczba, 7);
  cout << ",";
  cout << ResztaZDzielenia (liczba, 9) << endl;
  cout << "-----------------------------";

  return 0;
}

#include <iostream>

using namespace std;

int
main ()
{
  int ile = 3;
  do
    {
      cout << "Liczba to " << endl;
      cout << " a kwadrat liczby to " << ile*ile << endl;
      ++ile;
    }

  while (ile < 1000);

  cout << endl << "Nacisnij ENTER aby zakonczyc" << endl;
  getchar ();
  return 0;
}

#include <iostream>

using namespace std;

int
main ()
{
  int ile = 3;
  do
    {
      cout << "Pierwsza instrukcja" << endl;
      cout << "Druka instrukcja" << endl;
      ++ile;
    }

  while (ile < 10);

  cout << endl << "Nacisnij ENTER aby zakonczyc" << endl;
  getchar ();
  return 0;
}

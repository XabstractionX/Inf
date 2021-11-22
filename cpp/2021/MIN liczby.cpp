#include <iostream>

using namespace std;

int
main ()
{
  int N;
  cout << "Wpisz liczbe: ";
  cin >> N;
  int MIN = N;
  do
    {
      cout << "Wpisz liczbe: ";
      cin >> N;
      if (N > 0 && N < MIN)
	MIN = N;
    }
  while (N > 0);
  cout << "Minimalna: " << MIN << endl;
  return 0;
}

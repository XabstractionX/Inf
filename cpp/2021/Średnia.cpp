using namespace std;

float liczba;
float suma = 0;
float srednia;
int n = 0;

int
main ()
{
  cout << "podaj liczbe (0 oznacza koniec wpisu):";
  cin >> liczba;

  while (liczba != 0)
    {
      suma += liczba;
      n++;
      cout << "podaj liczbe (0 oznacza koniec wpisu): ";
      cin >> liczba;
    }
  if (n > 0)
    {
      srednia = suma / n;
      cout << "Srednia liczb wynosi " << srednia;
    }
  else
    {
      cout << "Nie podano zadnej liczby!";
    }
  return 0;
}

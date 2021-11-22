#include <iostream>

using namespace std;


int n;

int main()
{
    
    cout << "Podaj n: ";
    cin >> n;
    int i=1, suma = 0, skladnik = 2;
    for (i=1; i<=n; i++)
    {
        suma = suma + skladnik;
        skladnik = skladnik +2;
    }
    cout << "Suma " << n << " kolejnych liczb ";
    cout << "parzystych wynosi: " << suma << endl;
    

    return 0;
}

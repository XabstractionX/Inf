#include <iostream>

using namespace std;


float nota, mini, maks, suma;


int main()
{
    cout << "Podaj noty za skok: ";
    cin >> nota;
    mini = nota;
    maks = nota;
    suma = nota;
    
    for (int i=1; i<=4; i++ )
    {
        cin >> nota;
        suma = suma + nota;
        if (nota < mini) mini = nota;
        if (nota > maks) mini = nota;
    }
    
    suma = suma - mini - maks;
    cout << "Noty skrajne: " << mini << " i " << maks <<endl;
    cout << "Nota za skok: " << suma << endl;

    return 0;
}

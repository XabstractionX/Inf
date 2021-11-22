#include <iostream>

using namespace std;

string PIN;
int KWOTA;

string login, haslo;

int main()
{
    cout << "Wybitny Bank" << endl;
    cout << "Podaj login: " << endl;
    cin >> login;
    cout << "Podaj hasło: " << endl;
    cin >> haslo;
    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout << "Zalogowałeś się" << endl;
    }
    else 
    {
        cout << "Nie zalogowałeś się" << endl;
    } 
    
    cout << "Podaj numer PIN ";
    cin >> PIN;
    
    if (PIN == "7621")
    {
        cout << "Poprawny PIN" << endl;
        cout << "Podaj kwotę do wypłaty" << endl;
        cin >> KWOTA;
        cout << "O to twoje piniądze" << endl;
        cout << KWOTA;
    }
    else
    {
        cout << "Nie Poprawny PIN";
    }
    return 0;
}

#include <iostream>

using namespace std;
float a, maks;
int main()
{
    maks = 0;
    cout << "Podaj kolejne dlugosci skokow: " <<endl;
    cin >> a;
    while(a!=0)
    {
        if (a>maks) maks=a;
        cin >> a;
    }
    cout <<endl << "najdluzszy skok: " <<maks << "m" <<endl;
    return -0;
}

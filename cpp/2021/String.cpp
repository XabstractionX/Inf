#include <iostream>

using namespace std;

string i = "------------------";
int main ()
{
  string s1 = "biologia";
  string s2 = "molekularna";
  cout << i << endl;
  cout << s1 << endl;
  cout << i << endl;
  cout << s2 << endl;
  cout << i << endl;
  cout << s1 + s2 << endl;
  cout << i << endl;
  cout << s1 + " " + s2 << endl;
  cout << i << endl;
  string napis = s1 + " " + s2;
  cout << i << endl;
  cout << napis.size () << endl;
  cout << i << endl;
  return 0;
}

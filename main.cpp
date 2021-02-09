#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1000;

int main()
{
    ifstream in("liczby2.txt");
    int t[SIZE];
    for (int i = 0; i < SIZE; i++) in >> t[i];
    int fctn = 0, sctn = 0;
    int liczba;
    for (int i = 0; i < SIZE; i++) 
    {
        liczba = t[i];
        while (liczba) {
            if (liczba % 10 == 6) fctn++;
            liczba = liczba / 10;
    }
        liczba = t[i];
        while (liczba) 
        {
            if (liczba % 8 == 6) sctn++;
            liczba = liczba / 8;
        }
    }
    cout << fctn << " " << sctn << endl;
}

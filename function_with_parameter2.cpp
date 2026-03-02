#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "masukkan panjang :";
    cin >> panjang;
    cout << "masukkan lebar :";
    cin >> lebar;
}
int luaspersegi()
{
    return panjang * lebar;
}


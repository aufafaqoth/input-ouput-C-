#include <iostream>

using namespace std;

int main()
{
    int bilangan_040;
    char karakter;
    string kata;

    cout << "Masukkan bilangan: ";
    cin >> bilangan_040;

    cout << "Masukkan karakter: ";
    cin >> karakter;

    cout << "Masukkan kata: ";
    cin >> kata;

    cout << "\nData yang dimasukkan adalah: " << endl;
    cout << "Bilangan: " << bilangan_040 << endl;
    cout << "Karakter: " << karakter << endl;
    cout << "Kata: " << kata << endl;

    cout << "\nBilangan hexadesimal adalah: " << hex << bilangan_040 << endl;
    return 0;
}

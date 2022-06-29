#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char karakter_040;

    cout << "Masukkan sebuah karakter: ";
    karakter_040 = getch();
    cout << "Hasil fungsi getch" << karakter_040 << endl;

    cout << "Masukkan sebuah karakter: ";
    karakter_040 = getche();
    cout << "Hasil fungsi getche" << karakter_040 << endl;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float bilangan_040;

    cout << "Masukkan bilangan: ";
    cin >> bilangan_040;

    cout << setiosflags (ios::fixed);
    cout << "Dibulatkan menjadi: " << setprecision (2) << bilangan_040 << endl;

    return 0;
}

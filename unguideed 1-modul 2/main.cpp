#include <iostream>

using namespace std;

int main()
{
    float r_ling, L_ling040, K_ling;
    float phi = 3.14;

    cout << "Masukkan jari-jari lingkaran : ";
    cin >> r_ling;

    K_ling = 2 * phi * r_ling;
    L_ling040 = phi * r_ling * r_ling;

    cout << "Keliling Lingkaran : " << K_ling << endl;
    cout << "Luas Lingkaran : " << L_ling040 << endl;
    return 0;
}

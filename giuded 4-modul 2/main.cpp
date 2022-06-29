#include <iostream>

using namespace std;

int main()
{
    float celcius040,fahrenheit;

    cout << "Masukkan suhu dalam celcius : ";
    cin >> celcius040;

    fahrenheit = celcius040 * 9/5 + 32;

    cout << "Suhu dalam fahrenheit : " << fahrenheit << endl;
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main()
{

    int jml;

    cout << "masukkan jumlah data : ";
    cin >> jml;

    cout << "data ganjil" << endl;

    cout << "[ ";
    for (int i = 1; i <= jml; i += 2)
    {
        cout << i << " ";
    }
    cout << "]";

    cout << endl;

    cout << "data genap" << endl;

    cout << "[ ";
    for (int i = 0; i <= jml; i += 2)
    {
        if (i > 1)
        {
            cout << i << " ";
        }
    }
    cout << "]";

    return 0;
}
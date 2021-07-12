#include <iostream>


using namespace std;

int main() {
    int x, y, a[4][5], b[4][5];

    cout << "Penjumlahan Matrix 2 Dimensi" << endl;

    cout << "Matrix 1" << endl;
    for (x = 0; x <= 3; x++) {
        for (y = 0; y <= 4; y++) {
            cout << "Masukkan Index 1 (" << x << "," << y << ") = ";
            cin >> a[x][y];
        }
    }
    cout << endl << "Matrix 2" << endl;
    for (x = 0; x <= 3; x++) {
        for (y = 0; y <= 4; y++) {
            cout << "Masukkan Index 2 (" << x << "," << y << ") = ";
            cin >> b[x][y];
        }
    }
    cout << endl << "Matrix 1 + Matrix 2" << endl;
    for (x = 0; x <= 3; x++) {
        cout << endl;
        for (y = 0; y <= 4; y++) {
            cout << a[x][y] + b[x][y] << " ";
        }
    }
    return 0;
}
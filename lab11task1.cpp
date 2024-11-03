#include <iostream>
using namespace std;

int main() {
    const int N = 12; // Кількість елементів послідовності
    int a[N]; // Масив для збереження значень послідовності

    // Початкові значення
    a[0] = 1;
    a[1] = 2;

    // Обчислення послідовності
    for (int n = 2; n < N; ++n) {
        a[n] = 2 * a[n - 1] - a[n - 2];
    }

    // Виведення послідовності
    cout << "The first 12 elements of the sequence: ";
    for (int n = 0; n < N; ++n) {
        cout << a[n] << " ";
    }
    cout << endl;

    return 0;
}
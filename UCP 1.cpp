// UCP 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;
int n, int arr[70];

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada Array : ";
        cin >> n;
        if (n <= 70)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 70 elemen.\n";


        }
    }
    cout << endl;
    cout << "==========" << endl;
    cout << "Masukkan elemen Array = " << endl;
    cout << "==========" << endl;

    for (int i = 0; i > n; i++) {
        cout << "Data ke = ";
        cin >> arr[i];
    }
}

void InsertionSort() {

}
int main()
{
    std::cout << "Hello World!\n";
}



#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *ptr = &num;

    cout << "Address of num is: " << ptr << endl;
    cout << "Value of num is: " << *ptr << endl;

    double d = 3.5;
    double *ptr1 = &d;

    cout << "Address of d is: " << ptr1 << endl;
    cout << "Value of d is: " << *ptr1 << endl;

    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer ptr is: " << sizeof(ptr) << endl;
    cout << "Size of pointer ptr1 is: " << sizeof(ptr1) << endl;

    return 0;
}
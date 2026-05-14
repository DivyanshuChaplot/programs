#include <iostream>
using namespace std;

int main()
// what is pointer---> data type which holds the address of other data type
{
    int a = 3;
    int *b = &a;
    cout << "the address of a is " << b << endl;
    cout << "the address of a is " << &a << endl; // &= (address of) the operator

    cout << "the value at address b is " << *b << endl; // *= (value at ) dereference operator

    // pointer to pointer
    int **c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of b is " << c << endl;
    cout << "the value at address c is " << *c << endl;
    cout << "the value at address value(value at address c) c is " << **c << endl;

    return 0;
}
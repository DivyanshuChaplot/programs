// there are are two types of header file
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include"this.h" //this will produce an error if this.h is no present in the current directory.
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "Operators in c++:" << endl;
    cout << "Following are the types of operators in c++" << endl;
    // Arithmetic operators
    cout << " The value of a + b is " << a + b << endl;
    cout << " The value of a - b is " << a - b << endl;
    cout << " The value of a * b is " << a * b << endl;
    cout << " The value of a / b is " << a / b << endl;
    cout << " The value of a % b is " << a % b << endl;
    cout << " The value of a ++ is " << a++ << endl;
    cout << " The value of a -- is " << a-- << endl;
    cout << " The value of ++a is " << ++a << endl;
    cout << " The value of --a is " << --a << endl;

    // Assignment operators --> Used to assign values to variables
    //  int a =3 , b=9;
    //  char d='d';

    // comparison operatos
    cout << "The following are the comparison in c++:" << endl;
    cout << " The value of a == b is " << (a == b) << endl;
    cout << " The value of a != b is " << (a != b) << endl;
    cout << " The value of a >= b is " << (a >= b) << endl;
    cout << " The value of a <= b is " << (a <= b) << endl;
    cout << " The value of a == b is " << (a == b) << endl;
    cout << " The value of a > b is " << (a > b) << endl;
    cout << " The value of a < b is " << (a < b) << endl;

    // Logical  operatos
    cout << "The following are the logical operator in c++:\n";

    cout << " The value of  this logical and operator ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << " The value of  this logical or operator ((a==b) || (a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << " The value of  this logical not operator (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}
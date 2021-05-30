#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;

    // POINTERS

    // & --> (Address of)Reference operator. This operator gives the address of the specified variable in the memory.
    // So b will hold the value of a's address in memory. b is a pointer here.
    // int * --> This is the data type of a pointer.
    int *b = &a;
    cout << "Address of (a) --> b : " << b << endl;

    // * --> (Value of)Dereference operator. This give you the value at the specified address;
    // So *b will return the value at address b which is a
    cout << "Value of (b) --> a : " << *b << endl;

    // Pointer to pointer
    // int ** --> This is the data type of a pointer to pointer.
    int **c = &b;
    cout << "Address of (b) --> c : " << c << endl;

    // So *c will return the value stored at pointer c ie b ie address of a
    cout << "Value of (c) --> b : " << *c << endl;

    // So **c will return the value of(value of pointer c) -> value of b -> a
    cout << "(Value of (Value of (c))) --> Value of (b) --> a : " << **c << endl;

    // REFERENCE VARIABLES

    // Here x is a reference variable ie x recieves its value from the same reference as a.
    // Hence x is 10.
    // If we update the value of x that will effect the value of a as well since both are pointing to same memory location.
    // int & --> This is the data type of a reference variable
    int &x = a;
    cout << "a : " << a << ", x : " << x << endl;
    x = 20;
    cout << "a : " << a << ", x : " << x << endl;
    return 0;
}
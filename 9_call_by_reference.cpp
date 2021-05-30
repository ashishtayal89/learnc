#include <iostream>
using namespace std;

// Here x and y are holding the values of pointer to a and b ie 10 and 20
// These are called as reference variable since these are refering to the values located at the same memory location as a and b.
// Changing the values of x and y will also change the values of a and b since both are pointing to same memory location.
void swapByRefenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Here x and y hold the pointer to values 10 and 20.
// This is the pointers of variable a and b
// Changing the value at this pointer using *x and *y will change the values of a and b also since they are also pointing the the same reference.
void swapByPointers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Here x and y hold the value 10 and 20 respectively.
// These values are present at a different memory location than a and b.
// When we swap the values of x and y it doesn't effect the value of a and b since the memory locations are different.
void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "Actual value : "
         << "a = " << a << ", b = " << b << endl;
    // Here we are passing the value of a and b ie 10 and 20
    swapByValue(a, b);
    cout << "Swap by value : "
         << "a = " << a << ", b = " << b << endl;
    // Here we are passing the pointer of a and b ie the address in memory for a and b
    swapByPointers(&a, &b);
    cout << "Swap by pointer : "
         << "a = " << a << ", b = " << b << endl;
    // Here we are passing the pointer of a and b ie the address in memory for a and b
    swapByRefenceVar(a, b);
    cout << "Swap by reference : "
         << "a = " << a << ", b = " << b << endl;
    return 0;
}
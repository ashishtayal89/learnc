#include <iostream>
using namespace std;

int main()
{
    // ----Literals-------
    // By default any decimal number is considered a double type.
    // If we just write 3.14 and assign it to d. Now if we pass d to a function, it will assume d to be a double and not a float.
    // But now since we have apended f to the end, d becomes a float.
    // This is important since it has great use in method overloading.
    // We can either use f/F
    float d = 3.14f;
    // Similarly e will be also be a double and not long double if we don't append l or L after it.
    long double e = 3.14l;
    // This can be proved by looking at the size of each value.
    cout << "The size of 3.14 : " << sizeof(3.14) << endl;
    cout << "The size of 3.14f : " << sizeof(3.14f) << endl;
    cout << "The size of 3.14F : " << sizeof(3.14F) << endl;
    cout << "The size of 3.14l : " << sizeof(3.14l) << endl;
    cout << "The size of 3.14L : " << sizeof(3.14L) << endl;

    // ----Reference variables----
    float x = 455;
    // y is a refernce variable which refers to the same value as x.
    // It is not assinged a new area in the memory but rather it points to the same memory location.
    float &y = x;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // ----Typecasting----
    int a = 10;
    float b = 10.10;
    cout << "a: " << (float)a << endl;
    cout << "a: " << float(a) << endl;
    cout << "b: " << (int)a << endl;
    cout << "b: " << int(a) << endl;

    return 0;
}

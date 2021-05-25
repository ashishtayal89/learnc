#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int a = 10;
    const int b = 1000;
    const int c = 1000000;
    cout << "a: " << setw(8) << a << endl;
    cout << "b: " << setw(8) << b << endl;
    cout << "c: " << setw(8) << c << endl;

    // Precedence
    const int x = 30;
    const int y = 10;
    const int z = 20;
    cout << "The result is: " << x + 34 * y - 4 * z + 100 << endl;
    // How to os will evalutate the above expression
    cout << "The result is: " << (((x + (34 * y)) - (4 * z)) + 100) << endl;

    return 0;
}

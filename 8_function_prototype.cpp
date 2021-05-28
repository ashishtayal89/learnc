#include <iostream>
using namespace std;

// Function prototype
// int sum(int, int) --> We could also declare it like this by skipping the argument names.
int sum(int a, int b);
void g();

int main()
{
    // num1 and num2 are Actual Parameters
    int num1 = 3;
    int num2 = 4;
    cout << sum(num1, num2) << endl;
    g();
    return 0;
}

// Since we have declared this function after the main function so idealy this should not be visible to main function.
// But since we have declared a function prototype/declaration before main function it becomes visible to it.
int sum(int a, int b)
{
    // a and b are Formal Parameters
    return a + b;
}

void g()
{
    cout << "Good Morning" << endl;
}
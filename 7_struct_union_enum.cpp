#include <iostream>
using namespace std;

int main()
{
    cout << "Struct :" << endl;
    // struct's are hetorgenious and can contain value of different types
    // array's are homogenious and can contain value of only 1 type.
    // The size of a struct type is the addition of all the individual types inside it.
    // This struct occupies a total of 9 bytes in the memory
    // typedef is a keyword to define an alias for a type in this case emp
    typedef struct employee
    {
        int age;             // 4 Bytes
        float salary;        // 4 Bytes
        char nameStartsWith; // 1 Byte
    } emp;

    // We can also use "emp ashish" since emp is an alias of "struct employee"
    struct employee ashish; // OR emp ashish
    ashish.age = 31;
    ashish.salary = 23333333;
    ashish.nameStartsWith = 'A';

    cout << ashish.age << endl;
    cout << ashish.salary << endl;
    cout << ashish.nameStartsWith << endl;

    cout << "Union :" << endl;
    // This is used when you know that you would only use 1 of the types inside a union at any given point of time in your program.
    // The size of union is the max value amongst the given types inside a union. So the union "payment" is of 4 Bytes.
    // This is why unions are very helpfull in memory optimization
    // Eg in the below case the payment can be in bag of rice, a car, or in pounds. But at any given time it will be in any one of them
    union payment {
        int rice;     // 4 Bytes
        char car;     // 1 Byte
        float pounds; // 4 Bytes
    };

    payment payU;
    payU.rice = 2;
    cout << payU.rice << endl;
    payU.car = 'B';
    cout << payU.car << endl;
    cout << payU.rice << endl; // This will give you a garbage value since payU can hold 1 value at a time ie car = 'B' at this time.

    // Enums are used to define something which can have some fixed number of options.
    // Each option is actualy an integer value starting from 0.
    // So breakfast is 0, lunch is 1, dinner is 2
    cout << "Enum :" << endl;
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    Meal m1 = breakfast;
    cout << m1 << endl;

    return 0;
}
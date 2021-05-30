#include <iostream>
using namespace std;

// INLINE FUNCTION
// Inline functions are used to improve the performance of your code
// Inline functions are used if the function logic is very basic and very few lines.
inline int product(int a, int b)
{
    return a * b;
}

// STATIC VARIABLE
// Static varibales can be considered as function varibales ie their values remain saved with the function
// Upon every recall that value is used by the function
int getSeniorCitizenCount(int ages[])
{
    static int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ages[i] > 60)
        {
            count++;
        }
    }
    return count;
}

// DEFAULT ARGUMENT
// Default arguments provide a default value to an argument
// CONSTANT ARGUMENT
// These arguments are used to keep the value of the argument in a function constant.
// These arguments are usefull for reference and pointer variables. It prevents the function from accidently updating the value of a reference.
float getInterest(const int amount, float interest = 4)
{
    return ((amount * interest) / 100);
}

int main()
{

    int a = 10;
    int b = 20;
    cout << "The product of a and b is " << product(a, b) << endl;

    int ageGroup1[] = {30, 67, 21, 83};
    int seniorCitizens = getSeniorCitizenCount(ageGroup1);
    int ageGroup2[] = {82, 13, 61, 45};
    seniorCitizens = getSeniorCitizenCount(ageGroup2);
    cout << "Total number of senior citizens are : " << seniorCitizens << endl;

    cout << "The annual interest of regular cutsomer is : " << getInterest(10000) << endl;
    cout << "The annual interest of priveledged customer is : " << getInterest(10000, 6) << endl;

    return 0;
}
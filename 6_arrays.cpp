#include <iostream>
using namespace std;

int main()
{
    int marks[] = {34, // We can also write this as marks[4]
                   25,
                   45,
                   23};
    marks[2] = 65; // We can update the value in an array using its index
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // Array pointers

    // marks points to the address of the first byte of the first element in array.
    // Since marks[] is an array of integer so every element in array is of 4bytes.
    // So every element occupies 4 consecutive memory location.
    // So in the above example :
    // 34 is stored in 4 consecutive memory locations say 1,2,3,4
    // 25 is stored in next 4 consecutive memory locations say 5,6,7,8
    // 45 is stored in next 4 consecutive memory locations say 9,10,11,12
    // 23 is stored in next 4 consecutive memory locations say 13,14,15,16

    // p point to first byte of first element ie address of 34
    int *p = marks;
    cout << "The address of first element of array is : " << p << endl;

    // Incrementing the pointer by 1 give pointer to the first byte of the next array element. ie address of 25
    cout << "The address of next element of array is : " << p + 1 << endl;
    cout << "Pointer p is not changed : " << p << endl;

    // We could also use ++p instead of using p+1 but that would make p itself start pointing to the next element
    // Where when we do p+1 we don't update the original pointer p but just get the value of the pointer to the next element
    cout << "The address of next element of array is : " << ++p << endl;
    cout << "Pointer p is changed: " << p << endl;

    p = marks;
    // We can get the value from this pointers now using the dereference operator
    cout << "The values in the array are :" << endl
         << *p << endl
         << *(p + 1) << endl
         << *(p + 2) << endl
         << *(p + 3) << endl;

    return 0;
}
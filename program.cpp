#include <iostream>
using namespace std;

int main(void)
{
    // Pointers -> Data type which holds address of other data types
    int a = 3;
    int* b = &a;
    // & -> (Address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * -> (value at) Dereferene operator
    cout << "The value of address b is " << *b << endl;

    // Pointer to Pointer
    int** c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    // Pointer addition
    int numbers[] = {10, 20, 30, 40, 50};

    int* ptr = numbers;

    cout << *ptr << endl;
    ptr++;
    // ptr currently points to numbers[1].
    
    cout << *ptr << endl;
    
    cout << *(ptr + 2) << endl; 
    // ptr + 2 points to numbers[3].

    /*
        Since int = 4 bytes, the value of variable would increment by 4 bytes
        This means:
        New address = old address + n * sizeof(data type of pointer)
    */

    // Pointers subtraction
    int other_numbers[] = {10, 20, 30, 40, 50};

    int* ptr1 = &other_numbers[1];
    int* ptr2 = &other_numbers[4];

    cout << ptr2 - ptr1; 

    /*
        Since index of ptr1 = 1 and ptr 2 = 4
        4 - 1 = 3 (Result)
    */

    return 0;
}

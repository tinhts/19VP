// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /* This test the use of an interger pointer*/
    cout << "This test a simple int array\n";
    int a = 5, b=10;
    int* ptr = &a;
    cout << ptr << " " << *ptr << endl;
    ptr = &b;
    cout << ptr << " " << *ptr << endl;

    /* This test the use of a pointer to an int array. Note that the size of an interger is 4 bytes, so the pointer is increaed in 4 bytes steps*/
    int arr[10];
    int* ptrA = arr;                    // An array is a pointer. The difference is that you can change an array to point to somewhere else
    int v = 10;
    cout << "Create the Array" << endl;
    for (; ptrA < &arr[10]; ptrA++) {
        *ptrA = v;
        cout << ptrA << " " << *ptrA << endl;
        v = v + 2;
    }
    cout << "Print the Array" << endl;
    ptrA = arr;     // Reset the pointer to the start of the array
    for (; ptrA < &arr[10]; ptrA++) {
        cout << ptrA << " " << *ptrA << endl;
    }

    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

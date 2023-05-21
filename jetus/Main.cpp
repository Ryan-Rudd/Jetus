#include <iostream>
#include <stdio.h>
using namespace std;

string INPUT;

int main()
{
    cin >> INPUT;
    cout << "INPUT MEMORY REFFERENCE: \t" <<  (&INPUT) << endl;
    cout << "INPUT MEMORY ADDRESS:\t\t" << static_cast<void*>(&INPUT) << endl;

}

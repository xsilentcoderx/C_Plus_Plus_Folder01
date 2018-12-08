#include <iostream>
using namespace std;

// Definition of function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    cout << "In doPrint()" << endl;
}

// Definition of function main()
int main()
{
    cout << "Starting main()" << endl;
    doPrint(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    cout << "Ending main()" << endl;

    return 0;
}

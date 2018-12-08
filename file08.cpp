#include <iostream>
using namespace std;

// Prototype functions
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
void messageBox01();

int main(){
    messageBox01();
    cout << add(subtract(20, 10), multiply(20, 40)) << endl;
    cout << multiply(add(5, 10), divide(10, 2)) << endl;
    return 0;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

int divide(int x, int y){
    return x / y;
}

void messageBox01(){
    cout << "Welcome to the Silent World!" << endl;
}


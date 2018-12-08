#include <iostream>
using namespace std;

void messageBox01(){
    cout << "Welcome to my Silent World!" << endl;
}

int add(int x, int y){
    return x + y;
}

int multiply(int y, int z){
    return y * z;
}

int main(){

    messageBox01();

    cout << add(3, 2) << endl;
    cout << add(5, multiply(2, 5)) << endl;
    cout << add(multiply(3, 6), multiply(5, 20)) << endl;
}

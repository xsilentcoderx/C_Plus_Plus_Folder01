#include <iostream>
using namespace std;

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

int modulusNum(int x, int y){
    return x % y;
}

int main(){

    cout << add(10, 50) << endl;
    cout << subtract(60, 50) << endl;
    cout << multiply(20, 30) << endl;
    cout << divide(50, 10) << endl;
    cout << modulusNum(10, 2) << endl;
    cout << modulusNum(5, 2) << endl;

    return 0;
}

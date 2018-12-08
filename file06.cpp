#include <iostream>
using namespace std;


int add(int x, int y){
    return x + y;
}

int main(){

    int input01, input02;

    cout << add(5, 5) << endl;

    cout << "Please enter the random number:";
    cin >> input01;
    cout << "Please enter the random number:";
    cin >> input02;
    cout << "The total is " << add(input01, input02) << endl;

    return 0;
}

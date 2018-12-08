#include <iostream>
using namespace std;

void nameCall(string name){

    cout << "Your name is " << name << endl;

}

int main(){

    string name;

    cout << "What is your name? ";
    cin >> name;

    nameCall(name);

}

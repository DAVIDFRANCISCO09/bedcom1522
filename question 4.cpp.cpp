// this is code for question 4
#include <iostream>
using namespace std;
int main(){
    int value;
    cout <<"Enter an integer between 5 and 10:";
    cin>>value;
    
    while (value <5 || value > 10) {
        cout << "sorry you entered an invalid number,please try again \n";
        cout <<"Enter an integer between 5 and 10:";
        cin>> value;
        
    }
    cout <<"your input value(value) has been accepted"<<endl;
    return 0;
}
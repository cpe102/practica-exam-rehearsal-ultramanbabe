#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    double gpa;

    cout << "What's your name?: ";
    cin >> name;
    cout << "What's your GPA?: ";
    cin >> gpa;
    if(gpa >= 3.5){
        cout << name << " InW Jrim Jrim !!!";
    }else{
        cout << "Try harder, " << name << " !!!";
    }

    return 0;
}
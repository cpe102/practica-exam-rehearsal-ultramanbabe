#include<iostream>
using namespace std;

int main(){
    double sum = 0 , x;

    while(x != 0){
        cout << "Enter X: ";
        cin >> x;
        if(x > 0){
        sum = sum + x;
        }
    }
    cout << "Sum = " << sum;

    return 0;
}

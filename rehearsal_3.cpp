#include <iostream>
#include<cmath>
using namespace std;
//Write sumSqrt() here.

double sumSqrt(int N){
    int i = 1;
    double sum = 0;

    while(i <= N){
        if(N > 0){
        sum = sum + (1/sqrt(i));
        i++;
        }else{
            return 0;
        }
    }
    return sum;
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(3);
    double g = sumSqrt(-5);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}

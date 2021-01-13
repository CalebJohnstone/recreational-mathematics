/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main()
{
    //formula: f(n) := floor(f(n-1)) * (1+frac(f(n-1))
    double prev = 2.920050977316;
    double curr;
    int n = 1000;
    
    for(int i=0; i<n; ++i){
        curr = floor(prev) * (1+modf(prev, &prev));
        prev = curr;
        
        int value = (int) curr;
        cout << curr << " " << value << endl;
        
        if(!isPrime(value)){
            cout << "not a prime number, number: " << (i+1) << endl;
            break;
        }
    }

    return 0;
}

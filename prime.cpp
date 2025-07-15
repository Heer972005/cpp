#include<iostream>
#include<cmath>

using namespace std;
static bool isPrime(int n);
int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    if(isPrime(n))
        cout << n << " is prime number";
    else
        cout << n << " is not prime number";
}
static bool isPrime(int n){
    if(n<=1)
        return false;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
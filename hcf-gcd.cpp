#include<iostream>
using namespace std;
static int gcd(int a, int b);
int main(){
    int a, b;
    cout << "Enter the the 2 numbers:"<<endl;
    cin >> a >> b;
    cout << "GCD of " << a << " and" << b << " is " << gcd(a, b);
}
static int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b, a % b);
}
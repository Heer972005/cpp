#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int n;
    cout << "enter any number:";
    cin >> n;
    cout << "sum: "<<sumOfDigits(n);
    return 0;
}
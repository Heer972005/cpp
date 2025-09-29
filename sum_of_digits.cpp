#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    if(n>0){
        return sum += n % 10 + sumOfDigits(n / 10);
    }
    else
        return 0; 
}
int main(){
    int n;
    cout << "enter any number:";
    cin >> n;
    cout << "sum: "<<sumOfDigits(n);
    return 0;
}
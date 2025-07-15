#include<iostream>
using namespace std;
int main(){
    int n, rev = 0;
    cout << "Enter the number";
    cin >> n;
    int num = n;
    while(n>0){
        int r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    if(num==rev)
        cout << "palindrome";
    else
        cout << "not palindrome";
    return 0;
}

//rev=rev*10+r
//wap to find out addtion of numbers an natural numbers
//wap to find out sum of digits of a given number using recurssion
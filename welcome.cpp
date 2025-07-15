#include<iostream>
using namespace std;
//namespace-like package in java
//wap to ask age from the user and print if they are adult or not

int main()
{
    cout << "Enter three numbers:";
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << ((a > b) ? (a>c?"a is greater":"c is greater"):(b>c?"b is greater":"c is greaater"));
    /*if(age>=18)
        cout << "adult";
    else
        cout << "sorry kid!!";*/
    return 0;
}
 
//even or odd
//palindrom or not
//armstrong or not
//mulitiplication of digits--1*3*7
//factorial of given number
//factors of number
//prime
//fibbonachi
//wap to find about min and max of 3 numbers 


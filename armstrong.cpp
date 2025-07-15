#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,rem,sum=0;
    cout<< "Enter the number:";
    cin >> n;
    int num = n;
    while(n>0){
        rem = n % 10;
        n = n / 10;
        sum += rem*rem*rem;
    }
    if(num==sum)
        cout << "Armstrong" << endl;
    else
        cout << "not armstrong";
}
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "enter the number:";
    cin >> n;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    while (sum >= 10)
    {
        int temp = 0;
        while (sum > 0)
        {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }
    cout << sum;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    input:
        cout << "Enter the number of products:";
        cin >> n;
    if(n>=20||n<=1)
    {
        cout << "Out of range please enter again\n";
        goto input;
    }

        string proName;
        double proRat;
        if (proName.length() > 25)
            cout << "Out of range";
        cout << "Enter the product name and rating:\n";
        for (int i = 0; i <n;i++){
            cin >> proName >> proRat;
        }

        return 0;
}